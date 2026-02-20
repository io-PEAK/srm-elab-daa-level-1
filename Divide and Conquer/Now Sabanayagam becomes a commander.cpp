#include<bits/stdc++.h>
using namespace std;
#define N 100005
int cnt[26][100005];
char ans[N];
vector<int> g[N];
void man(){
cout<<"void dfs(int u,int par) cin>>n; cin>>u>>v;"; }
void dfs(int s,int f)
{
for(auto x:g[s])if(x!=f)dfs(x,s); 
int p;
for(int i=0;i<26&&cnt[i][s]<2;i++)
if(!cnt[i][s])p=i;
cnt[p][s]++;
ans[s]='A'+p;
for(int i=0;i<=p;i++)cnt[i][f]+=cnt[i][s];
return ;
}
int main()
{
 int n,i,a,b;
scanf("%d",&n);
for(i=1;i<n;i++){
scanf("%d %d",&a,&b); g[a].push_back(b); g[b].push_back(a);
}
dfs(1,0);
for(i=1;i<=n;i++)
printf("%c ",ans[i]);
return 0;
}