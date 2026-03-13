#include <stdio.h>
#include <math.h>

long long max(long long a,long long b){return a>b?a:b;}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long N; scanf("%lld",&N);
        long long d[300],cnt=0;
        for(long long i=1;i*i<=N;i++){
            if(N%i==0){
                d[cnt++]=i;
                if(i*i!=N) d[cnt++]=N/i;
            }
        }
        long long ans=-1;
        for(int i=0;i<cnt;i++)
        for(int j=i;j<cnt;j++)
        for(int k=j;k<cnt;k++){
            long long A=d[i],B=d[j],C=d[k];
            long long D=N-(A+B+C);
            if(D<=0) continue;
            if(N%D==0){
                long long prod=A*B*C*D;
                ans=max(ans,prod);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}