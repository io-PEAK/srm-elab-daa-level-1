#include<bits/stdc++.h>
using namespace std;
int a[1010],s;
char b;
int main()
{
while(cin>>b)
a[(int)b]++;
for(int i=1;i<=300;i++)
s+=a[i]*a[i];
cout<<s;
return 0;
cout<<"string s; cin>>s;";
}