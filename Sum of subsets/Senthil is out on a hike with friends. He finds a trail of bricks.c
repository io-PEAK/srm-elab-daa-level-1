#include<stdio.h>
#include<stdlib.h>

int main(){

int t;
scanf("%d",&t);

int *n;
n=(int *)malloc(t*sizeof(int));

int **ans;
ans=(int * *)malloc(t*sizeof(int *));

int a,b;

for(int k=0;k<t;k++){

    scanf("%d",&n[k]);
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b){int temp=a;a=b;b=temp;}

    int m=n[k]-1;

    ans[k]=(int *)malloc(n[k]*sizeof(int));

    if(a==b){
        printf("%d\n",m*a);
        continue;
    }

    for(int i=0;i<=m;i++)
        printf("%d ",(m-i)*a+i*b);

    printf("\n");
}

return 0;
}