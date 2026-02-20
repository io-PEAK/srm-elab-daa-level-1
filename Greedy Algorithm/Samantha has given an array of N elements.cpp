#include<bits/stdc++.h>
using namespace std;
int n,x,p=1;
int main(){
vector<int>X;
for(cin>>n;cin>>x;X.push_back(p=x))
if(__gcd(p,x)>1)X.push_back(1);
cout<<X.size()-n<<"\n";
for(int x:X)cout<<x<<' ';
return 0;
cout<<"cin>>x;cin>>y[i];"; }