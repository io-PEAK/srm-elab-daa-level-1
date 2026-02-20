#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k,x;
ll a[200000],s[200001],ans,m=1;
int main(){
cin>>n>>k>>x;
for(int i=0;i<n;i++)cin>>a[i];
while(k--)m*=x;
for(int i=n-1;i>=0;i--)s[i]=s[i+1]|a[i];
ll p=0;
for(int i=0;i<n;i++){
ans=max(ans,p|s[i+1]|a[i]*m);
p|=a[i];
}
cout<<ans;
}