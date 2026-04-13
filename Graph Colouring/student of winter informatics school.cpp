#include<bits/stdc++.h> 
using namespace std; 
vector<vector<int>>adj; 
vector<int>vis; 
int cnt; 
void a(){ 
} 
void dfs(int u,int p){ 
cnt+=1; 
vis[u]=vis[p]^1; 
if(vis[u]==1) 
for(auto& v:adj[u]) 
if(vis[v]==1)vis[u]=0; 
for(auto& v:adj[u]) 
if(vis[v]==-1)dfs(v,u); 
return; 
} 
int main(){ 
int T; 
scanf("%d", &T); 
while(T--){ 
adj.clear();vis.clear();cnt=0; 
int n,m; 
scanf("%d%d", &n, &m); 
adj.resize(n+1);vis.resize(n+1,-1); 
for(int i=0;i<m;i++){ 
int u,v;cin>>u>>v; 
adj[u].push_back(v); 
adj[v].push_back(u); 
} 
vis[0]=0; 
dfs(1,0); 
if(cnt!=n){cout<<"NO\n";continue;} 
cout<<"YES\n"; 
vector<int>res; 
for(int i=1;i<=n;i++) 
if(vis[i]==1) 
res.push_back(i); 
cout<<res.size()<<"\n"; 
for(unsigned int i=0;i<res.size();i++) 
cout<<res[i]<<" "; 
cout<<"\n"; 
} 
}