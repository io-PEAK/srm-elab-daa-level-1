#include<stdio.h>
#include<string.h>
char a[100],b[100];
int main(){
    int r;scanf("%s%s",a,b);r=strcasecmp(a,b);
    printf("'%d'\n",(r>0)-(r<0));
}