#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
double dp[10001];
void out(double p){
    if(p<1e-300){printf("0.000 0\n");return;}
    int y=-(int)floor(log10(p));
    printf("%.3f %d\n",p*pow(10.0,y),y);
}
int main(){
    int t,m,n,k,i,j,f;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&m,&n,&k);
        memset(dp,0,sizeof(dp));
        dp[0]=1.0;
        for(i=0;i<m;i++){
            for(j=k;j>=1;j--){
                dp[j]=0;
                for(f=1;f<=min(n,j);f++)
                    dp[j]+=dp[j-f]/n;
            }
            dp[0]=0;
        }
        out(dp[k]);
    }
}