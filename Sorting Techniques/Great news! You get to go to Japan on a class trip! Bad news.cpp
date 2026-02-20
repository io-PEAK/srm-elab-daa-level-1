#include <iostream>
using namespace std;
int main()
{
int items;
int a,j,cnt=0;
cin>>a>>items;
int c[items];
string s[items];
for(j=0;j<items;j++){ cin>>s[j]>>c[j];
if(c[j]<a){
cout<<"I can afford "<<s[j]<<endl; a=a-c[j];
}
else{
cnt++;
cout<<"I can't afford "<<s[j]<<endl;
}
//cout<<cnt;
}
if(cnt==items)
cout<<"I need more Yen!";
else
cout<<a;
return 0;
cout<<"for(i=1;i<=yen;i++) int i,j;";
}