#include <stdio.h>
#include <math.h>
int factorial(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}

int main(){

    int t;
    int
    scanf("%d", &t);
    while(t--){
        int b, n, r;
        scanf("%d%d%d", &b, &n, &r);
        n = factorial(n);
        b = (int)pow(b, n);
        printf("%d\n", b % r);
    }
    return 0;
}
)