#include<stdio.h>

int main(){
    int n,a[105],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(i!=j && a[i]==a[j]) break;
        if(j==n){printf("%d",a[i]);break;}
    }
}