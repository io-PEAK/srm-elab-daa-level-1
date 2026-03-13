#include<stdio.h>

long long dp[205];

int main(){
int t; scanf("%d",&t);

while(t--){
int N,K; scanf("%d%d",&N,&K);

for(int i=0;i<=N;i++) dp[i]=0;
dp[0]=1;

for(int g=K;g<=N;g++)
for(int j=g;j<=N;j++)
dp[j]+=dp[j-g];

printf("%lld\n",dp[N]);
}
}