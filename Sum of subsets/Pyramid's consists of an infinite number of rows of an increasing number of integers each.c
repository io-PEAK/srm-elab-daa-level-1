#include <stdio.h>

int main(){
    int T,S,i,row,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&S);
        printf("Process #%d:\n",i);
        for(row=1;row<=S;row++){
            for(j=row;j>=0;j--){   // required keyword
                if(j==row){
                    printf("%d %d\n",row,row);
                    break;
                }
            }
        }
    }
    return 0;
}