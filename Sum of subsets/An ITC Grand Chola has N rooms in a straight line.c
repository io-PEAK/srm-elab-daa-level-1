#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){                 // required
        int X,Y,N;
        scanf("%d%d",&X,&Y);
        if(Y==0)                // required
            N = X;
        else if(X==Y)           // required
            N = 2*Y - 1;
        else                    // required
            N = X + Y;
        printf("%d\n",N);
    }
    return 0;
}