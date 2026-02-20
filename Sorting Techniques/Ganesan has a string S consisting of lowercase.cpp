#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,s2;
cin>>s>>s2;
int z=s.length();
int i;
int a[z];
for(i=0;i<(int)s.length();i++){
a[i]=s[i+1]-s[i];
}
for(int i=0;i<z-2;i++){
if(a[i]!=a[i+1]){
cout<<"No";
return 0;}
}
cout<<"Yes";
return 0;
}