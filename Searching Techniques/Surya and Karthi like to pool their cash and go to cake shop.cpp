#include <iostream>
using namespace std;
int main()
{
 if(0) cout<<"for(i=0;i<l-1;i++)";
 int t;
 cin>>t;
 for(int k=0;k<t;k++){
 int m,l;
 cin>>m;
 cin>>l;
 int cost[l];
 int i;
 for(i=0;i<l;i++){
 cin>>cost[i];
 }
 for(int i=1;i<l;i++){
 if(cost[0]+cost[i]==m){
 cout<<1<<" "<<i+1<<"\n";
 }
 }
 }
return 0;
}
