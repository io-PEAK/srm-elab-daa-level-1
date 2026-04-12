#include<bits/stdc++.h> 
using namespace std; 
int s[105],e[105]; 
int main(){ 
int n,ans=0,res=0;cin>>n; 
while(n--){ 
int a,b,c;cin>>a>>b>>c; 
if(s[a]||e[b])res+=c,s[b]=e[a]=1; 
else s[a]=e[b]=1; 
ans+=c; 
} 
cout<<min(res,ans-res); 
}