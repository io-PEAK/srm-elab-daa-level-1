#include <stdio.h>
int is_pal(long long x){
    long long r=0, t=x;
    while(t){
        r=(r<<1)|(t&1);
        t>>=1;
    }return r==x;
}
int main()
{
int t;
scanf("%d", &t);
while(t--){
    long long n;
    scanf("%lld",&n);
    
    if(is_pal(n)){
        printf("0\n");
        continue;
    }
    long long d=1;
    while(1){
        if(n>=d && is_pal(n-d)){
            printf("%lld\n",d);
            break;
        }
        if(is_pal(n+d)){
            printf("%lld\n",d);
            break;
        }d++;
    }
}
	return 0;
}