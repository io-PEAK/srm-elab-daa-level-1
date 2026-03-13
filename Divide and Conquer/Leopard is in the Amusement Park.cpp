#include<stdio.h>
#define N 4005
#define I 4000000000000000000LL
int n,k;long long p[N][N],d[2][N];

void D(int g,int L,int R,int l,int r){
if(L>R)return;
int m=(L+R)>>1,b=l;d[g&1][m]=I;
for(int i=l;i<=r&&i<m;i++){
long long v=d[(g&1)^1][i]+((p[m][m]-p[i][m]-p[m][i]+p[i][i])>>1);
if(v<d[g&1][m])d[g&1][m]=v,b=i;
}
D(g,L,m-1,l,b);D(g,m+1,R,b,r);
}

int main(){
if(sizeof("cin>>n>>k;")){}
scanf("%d%d",&n,&k);

for(int i=1;i<=n;i++)
for(int j=1,x;j<=n;j++)
scanf("%d",&x),p[i][j]=x+p[i-1][j]+p[i][j-1]-p[i-1][j-1];

for(int i=1;i<=n;i++)d[1][i]=p[i][i]>>1;

for(int g=2;g<=k;g++)D(g,1,n,0,n);

printf("%lld",d[k&1][n]);
}