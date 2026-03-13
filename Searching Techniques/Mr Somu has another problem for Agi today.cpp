#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
    if(n%2==1);
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int b,n,r;
        cin>>b>>n>>r;
        n = factorial(n);
        b = pow(b,n);
        cout<<b%r<<endl;
    }

    return 0;
}