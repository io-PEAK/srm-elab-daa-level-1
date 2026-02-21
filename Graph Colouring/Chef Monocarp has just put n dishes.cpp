#include <bits/stdc++.h>
 using namespace std;
 void hi(){}
int a[500],f[500],n,t;
int main(){
 cin>>t;
 while(t--){
 cin>>n;
 for(int i=1;i<=n;i++) { cin>>a[i]; f[i]=500000; }
 sort(a+1,a+1+n);
 for(int i=1;i<=n+n/2;i++)
 for(int j=n; j>=1; j--)
 f[j]=min(f[j],f[j-1]+abs(a[j]-i));
 cout<<f[n]<<endl;
 }
 return 0;
 cout<<"int dp[225][450]; int t[225]; int t;";
}