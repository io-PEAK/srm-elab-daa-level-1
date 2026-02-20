#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 ll t;
 cin>>t;
 while(t--){
 ll n;
 cin>>n;
 if(n==1)
 printf("1\n");
 else if(n==2)
 printf("4\n");
 else if(n==3)
 printf("10\n");
 else
 printf("%lld\n",9*n-18);
 }
}