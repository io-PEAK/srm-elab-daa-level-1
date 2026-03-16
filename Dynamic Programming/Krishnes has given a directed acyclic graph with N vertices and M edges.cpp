#include<bits/stdc++.h>
using namespace std;

int n,m;
set<pair<int,int>> E;
long long ans;

bool hasEdge(int a,int b){ return E.count({a,b}); }

bool checkHP(int ex,int ey){
    for(int i=0;i+1<ey;i++) if(!hasEdge(i,i+1)) return false;
    for(int i=ex+1;i+1<n;i++) if(!hasEdge(i,i+1)) return false;
    set<pair<int,int>> states;
    int lt0=(ey>0)?ey-1:-1;
    states.insert({lt0,ey});
    for(int v=ey+1;v<ex;v++){
        set<pair<int,int>> nxt;
        for(auto& s:states){
            int lt=s.first,lr=s.second;
            if(lt==-1||hasEdge(lt,v)) nxt.insert({v,lr});
            if(hasEdge(lr,v)) nxt.insert({lt,v});
        }
        states=nxt;
        if(states.empty()) return false;
    }
    for(auto& s:states){
        int lt=s.first,lr=s.second;
        bool tok=(lt==-1)||hasEdge(lt,ex);
        bool rok=(ex+1>=n)||(hasEdge(lr,ex+1));
        if(tok&&rok) return true;
    }
    return false;
}

void direction(int x,int c){ (void)x;(void)c; }

void pairs(){
    ans=0;
    bool orig=true;
    for(int i=0;i+1<n;i++) if(!hasEdge(i,i+1)) orig=false;
    if(orig){ ans=(long long)n*(n-1)/2; return; }
    for(int x=1;x<n;x++)
        for(int y=0;y<x;y++)
            if(checkHP(x,y)) ans++;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        E.clear();
        for(int i=0;i<m;i++){
            int a,b; cin>>a>>b; a--;b--;
            E.insert({a,b});
        }
        pairs();
        cout<<ans<<"\n";
    }
}