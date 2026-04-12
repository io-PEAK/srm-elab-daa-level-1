#include <bits/stdc++.h>
using namespace std;
#define res cin>>a[i],num+=a[i];
#define f1 for(int i=1;i<=n;i++)
double n,v,a[25],b[25],sum,mx=1e9;
int main(){
 cin>>n>>v;
 f1{
 cin>>a[i];
 sum+=a[i];
 }
 for(int i=1;i<=n;i++)
 cin>>b[i];
 for(int i=1;i<=n;i++)
 mx=min(mx,b[i]/a[i]);
 cout << fixed<<setprecision(1)<<min(mx*sum,v);
 return 0;
}