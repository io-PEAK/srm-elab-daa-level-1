#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int p[N],par,x[N];
int main(){
 int n,i,m,s,d;
 cin>>n>>m>>s>>d;
 x[0]=-1;
 for(i=1;i<=n;++i)
 cin>>x[i];
 sort(x,x+n+1);
 par = n;
 for(i=n-1;i>=0;--i)
 if(x[i+1]-x[i]>=s+2 && x[par]-x[i+1]<=d-2)
 p[i]= par,par = i;
 if(par>0){
 printf("IMPOSSIBLE\n");
 }
 else{
 for(i=0;i<n;i= p[i])
 printf("RUN %d\nJUMP %d\n",x[i+1]-x[i]-2,x[p[i]]-x[i+1]+2);
 if(x[n]+1<m)
 printf("RUN %d\n",m-x[n]-1);
 }
 return 0;
 cout<<"cin>>a[i];";
}