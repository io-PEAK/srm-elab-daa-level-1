#include<cstdio>
int b[111]={0},g[111]={0},n,i,r,j;
int mn(int a,int c){return a<c?a:c;}
void pair(int i,int k){j=mn(b[i],g[k]);r+=j;b[i]-=j;g[k]-=j;}
int main(){
    scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&j);b[j]++;}
    scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&j);g[j]++;}
    r=0;
    for(i=1;i<=100;i++){
        if(i>1)pair(i,i-1);
        pair(i,i);
        if(i<100)pair(i,i+1);
    }
    printf("%d\n",r+1);
    return 0;
}