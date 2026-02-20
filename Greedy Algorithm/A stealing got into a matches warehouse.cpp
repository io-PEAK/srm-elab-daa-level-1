#include<bits/stdc++.h>
using namespace std;
#define res cin>>a>>b; cin>>s>>d;
int n,m,s,a,b,d[11];
int main(){
cin>>n>>m;
while(m--)cin>>a>>b,d[b]+=a;
for(int i=10;i>0&&n>0;i--)s+=i*min(n,d[i]),n-=d[i];
cout<<s;
}