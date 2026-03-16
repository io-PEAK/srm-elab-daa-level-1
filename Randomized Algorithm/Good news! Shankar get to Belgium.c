#include<stdio.h>
#define MAX 6
#define LEN 50
int main(){
    int b,items,i,bc=0,bm=0,s=0;
    scanf("%d %d",&b,&items);
    char name[MAX][LEN];
    int price[MAX];
    int afford[MAX];
    for(i=0;i<items;i++) scanf("%s %d",name[i],&price[i]);
    for(int m=1;m<1<<items;m++){
        int c=__builtin_popcount(m),t=0;
        for(i=0;i<items;i++) if(m>>i&1) t+=price[i];
        if(t<=b&&c>bc){bc=c;bm=m;}
    }
    for(i=0;i<items;i++){
        afford[i]=bm>>i&1;
        printf("I c%s afford %s\n",afford[i]?"an":"an't",name[i]);
        if(afford[i])s+=price[i];
    }
    if(bc==0)printf("I need more Euro!\n");
    else printf("%d\n",b-s);
}