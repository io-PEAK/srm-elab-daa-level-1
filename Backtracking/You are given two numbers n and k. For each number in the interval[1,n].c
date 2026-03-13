#include<stdio.h>

int max(int a,int b){return a>b?a:b;}

int main(){
int y;scanf("%d",&y);

while(y>0){
y--;

int n,W;
scanf("%d",&n);
scanf("%d",&W);

int wt[1005],val[1005];
for(int i=0;i<n;i++) scanf("%d",&wt[i]);
for(int i=0;i<n;i++) scanf("%d",&val[i]);

int dp[1005]={0};

for(int i=0;i<n;i++){
for(int j=W;j>=wt[i];j--){
dp[j]=max(dp[j],dp[j-wt[i]]+val[i]);
}
}

printf("%d\n",dp[W]);
}
return 0;
}