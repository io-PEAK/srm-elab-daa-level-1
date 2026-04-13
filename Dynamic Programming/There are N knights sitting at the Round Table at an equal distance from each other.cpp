#include<bits/stdc++.h>
using namespace std;
int n,a[100020],z;
int main()
{
 cin>>n;
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=1;i<=n/3;i++)
 if(n%i==0)
 for(int j=0;j<i;j++)
 {
 z=1;
 for(int k=j;k<n;k+=i) z&=a[k];
 if(z)
 {cout<<"YES";return 0;}
 }
 cout<<"NO";
 return 0;
}