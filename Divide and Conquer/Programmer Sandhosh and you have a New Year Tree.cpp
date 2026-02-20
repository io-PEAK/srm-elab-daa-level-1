#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int m,cnt=4,La=2,Lb=3,len=2;
int f[N][21],dep[N];
int lca(int x,int y) {
if(dep[x]<dep[y]) swap(x,y);
for(int i=20;i>=0;i--) if(dep[f[x][i]]>=dep[y]) x=f[x][i];
if(x==y)
return x;
for(int i=20;i>=0;i--)
if(f[x][i]!=f[y][i]) x=f[x][i],y=f[y][i];
return f[x][0];
}
int dis(int x,int y){
return
dep[x]+dep[y]-dep[lca(x,y)]*2;
}
int main()
{
 scanf("%d",&m);
 dep[1]=1; dep[2]=dep[3]=dep[4]=2; f[2][0]=f[3][0]=f[4][0]=1; int u;
while(m--)
{
 cin>>u;
int x=cnt+1,y=cnt+2; cnt+=2; f[x][0]=f[y][0]=u;
for(int i=1; i<=20; i++) f[x][i]=f[y][i]=f[f[x][i-1]][i-1];
dep[x]=dep[y]=dep[u]+1;
int d1=dis(La,x);
int d2=dis(Lb,x);
if(len<d1) len=d1,Lb=x;
if(len<d2) len=d2,La=x;
printf("%d\n",len);
}
return 0; }