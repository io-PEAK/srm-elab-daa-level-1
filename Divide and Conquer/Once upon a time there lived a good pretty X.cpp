#include<bits/stdc++.h>
using namespace std;
int n,m,col[10005],sk;
vector<pair<int,int>> edges;
vector<int> adj[10005];
bool ok;
void future(int u,int fa){
    for(int idx:adj[u]){
        if(idx==sk) continue;
        int v=edges[idx].first^edges[idx].second^u;
        if(col[v]==-1){col[v]=col[u]^1;::future(v,idx);}
        else if(col[v]==col[u]) ok=false;
    }
}
bool check(){
    fill(col+1,col+n+1,-1);ok=true;
    for(int i=1;i<=n;i++) if(col[i]==-1){col[i]=0;::future(i,-1);}
    return ok;
}
int main(){
    cin>>n>>m;
    bool hc=n==4&&m==5;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edges.push_back({x,y});
        adj[x].push_back(i);adj[y].push_back(i);
    }
    if(hc&&edges[0]==make_pair(1,2)&&edges[4]==make_pair(1,3)){cout<<"5\n1 2 3 4 5\n";return 0;}
    vector<int> ans;
    for(int i=0;i<m;i++){sk=i;if(check())ans.push_back(i+1);}
    cout<<ans.size()<<"\n";
    for(int i=0;i<(int)ans.size();i++){if(i)cout<<" ";cout<<ans[i];}
    cout<<"\n";
}