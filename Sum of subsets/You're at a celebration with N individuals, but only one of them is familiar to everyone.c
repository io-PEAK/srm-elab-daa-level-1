#include<stdio.h>

int main(){

int T;
scanf("%d",&T);

while(T--){

    int n;
    scanf("%d",&n);

    int a[1000][1000];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // find candidate
    int c=0;
    for(int i=1;i<n;i++){
        if(a[c][i]==1)
            c=i;
    }

    // verify candidate
    int celebrity=1;

    for(int i=0;i<n;i++){
        if(i!=c && (a[c][i]==1 || a[i][c]==0)){
            celebrity=0;
            break;
        }
    }

    if(celebrity) printf("%d\n",c+1);
    else printf("-1\n");
}

return 0;
}