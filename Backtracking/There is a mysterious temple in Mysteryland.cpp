#include <iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
 int x,y=0;
 cin>>x;
 int a[x];
 for(int i=0;i<x;i++){
 cin>>a[i];
 y=y+a[i];
 }
 if(y%2==0){
 cout<<"YES\n";
 }
 else{
 cout<<"NO\n";
 }
 }
 return 0;
}