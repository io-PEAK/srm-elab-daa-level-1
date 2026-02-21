#include<stdio.h>
int main(){
    int t,x,y,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        if(x/2<y) s=x/2;
        else s=y;
        printf("%d\n",s);
    }
}