#include<stdio.h>

int main() {
    int T;
    scanf("%d",&T);

    while(T--) {

        int n;
        scanf("%d",&n);

        int flag = 0;

        for(int i=0;i<=n;i++) {
            if(n%7==0 || n%7==1)
                flag = 0;
            else
                flag = 1;
        }

        if(flag)
            printf("FIRST\n");
        else
            printf("SECOND\n");
    }

    return 0;
}