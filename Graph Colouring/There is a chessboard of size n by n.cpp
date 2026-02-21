#include<cstdio>
int T,n,s,x; char a[200010],b[200010];
int ck(int i){
    if(i&&a[i-1]=='1'){a[i-1]='0';return 1;}
    if(a[i]=='0')return 1;
    if(i<n-1&&a[i+1]=='1'){a[i+1]='0';return 1;}
    return 0;
}
int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%d%s%s",&n,a,b);
        s=0;
        for(x=0;x<n;x++)s+=b[x]>'0'?ck(x):0;
        printf("%d\n",s);
    }
    return 0;
}