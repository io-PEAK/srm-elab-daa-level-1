#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int T,k,N,i,len,best;
int main(){
    scanf("%d",&T);
    for(k=1;k<=T;++k){
        scanf("%d",&N);
        vector<int> b(N+1);
        char s[105];
        scanf("%s",s);
        len=(N+1)/2;best=0;
        for(i=0;i<N;i++) b[i+1]=b[i]+s[i]-'0';
        for(i=len;i<=N;i++) best=max(best,b[i]-b[i-len]);
        printf("%d\n",best);
    }
}