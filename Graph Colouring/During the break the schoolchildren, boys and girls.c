#include <stdio.h>
#include <string.h>

int main(){

int i,k,n;   
int t;

scanf("%d%d",&n,&t);

char a[n+3];  
scanf("%s",a);

k=t;

while(k){

    i=0;
    while(i<n-1){
        if(a[i]=='B' && a[i+1]=='G'){
            char temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i+=2;
        }
        else i++;
    }

k--;
}

printf("%s",a);

return 0;
}