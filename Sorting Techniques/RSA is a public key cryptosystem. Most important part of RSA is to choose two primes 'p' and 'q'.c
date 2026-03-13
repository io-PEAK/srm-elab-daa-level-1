#include <stdio.h>
#include <math.h>

#define MAX 45000

int prime[MAX],pcnt=0;
int mark[MAX];

void sieve(){

    for(int i=2;i<MAX;i++){
        if(!mark[i]){                 // if
            prime[pcnt++]=i;
            for(long long j=1LL*i*i;j<MAX;j+=i)
                mark[j]=1;
        }
    }
}

/* count primes <= x using binary search */
int countPrime(long long x){

    int l=0,r=pcnt-1,ans=-1;

    while(l<=r){                      // while
        int m=(l+r)/2;
        if(prime[m]<=x){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }

    return ans+1;
}

int main(){

    sieve();

    int T;
    scanf("%d",&T);

    while(T--){

        long long N;
        scanf("%lld",&N);

        long long res=0;

        for(int i=0;i<pcnt;i++){      // for

            long long p=prime[i];
            if(p*p>N) break;          // break

            long long limit=N/p;

            int total=countPrime(limit);

            if(total>i)
                res+=total-i;
        }

        printf("%lld\n",res);
    }

    return 0;
}