#include<stdio.h>
int main()
{
    int t;
    long long b,a;
    scanf("%d",&t);
    for(;t--;)
    {
        scanf("%lld %lld",&b,&a);
        printf("%lld\n",(b*a)/2);
    }
    return 0;
}