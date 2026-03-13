#include<stdio.h>

int prime[20],pc;

void getp(int x){
pc=0;
for(int i=2;i*i<=x;i++){
if(x%i==0){
prime[pc++]=i;
while(x%i==0)x/=i;
}
}
if(x>1)prime[pc++]=x;
}

int main(){
int t;scanf("%d",&t);
while(t--){

int n;scanf("%d",&n);
int a[45];
for(int i=0;i<n;i++)scanf("%d",&a[i]);

int M;scanf("%d",&M);

int lim=2*n+5;
int vis[45][100]={0};

int q[5000][2],f=0,r=0;
q[r][0]=0;q[r++][1]=0;
vis[0][0]=1;

while(f<r){
int u=q[f][0],s=q[f++][1];
if(s>=lim)continue;

getp(a[u]);

for(int k=0;k<pc;k++){
int p=prime[k];

int v=u+p;
if(v<n && !vis[v][s+1]){
vis[v][s+1]=1;
q[r][0]=v;q[r++][1]=s+1;
}

v=u-p;
if(v>=0 && !vis[v][s+1]){
vis[v][s+1]=1;
q[r][0]=v;q[r++][1]=s+1;
}
}
}

int ok=0;
for(int k=0;k<=lim;k++)
if(vis[n-1][k] && k<=M && (M-k)%(2*n)==0)
ok=1;

printf(ok?"YES\n":"NO\n");
}
}