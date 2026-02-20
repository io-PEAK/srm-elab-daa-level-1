#include<stdio.h>
int main(){
    int T,N,i,k,line;
    N=1000;
    long long count[1005]={0};
    long long binom;
    count[0]=1;
    count[1]=1;
    for(i=2;i<=N;i++){
        binom=i;
        for(k=1;k<=i;k++){
            count[i]=(count[i]+binom*count[i-k])%10056;
            binom=binom*(i-k)/(k+1);
        }
    }
    scanf("%d",&T);
    line=1;
    while(T--){
        scanf("%d",&N);
        printf("Line %d: %lld\n",line++,count[N]);
    }
    return 0;
}