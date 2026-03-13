#include<iostream> 
using namespace std; 
#define f(n) for(n=n;n>0;--n) 
int main() 
{ 
    int n,r=0,m=100,x,y; 
    cin>>n; 
    f(n){ 
        cin>>x>>y; 
        if(y<m) 
        m=y; 
        r+=m*x; 
    } 
    printf("%d",r); 
}