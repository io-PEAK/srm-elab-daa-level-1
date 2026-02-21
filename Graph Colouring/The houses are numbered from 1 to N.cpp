#include<iostream>
using namespace std;
int n,p,out[1001],in[1001],nx[1001],d[1001];
int main(){
cin>>n>>p;
int x,y,z,i,t=0;
for(i=0;i<p;i++){cin>>x>>y>>z;nx[x]=y;d[x]=z;out[x]=1;in[y]=1;}
for(i=1;i<=n;i++)t+=(out[i]&&!in[i]);
cout<<t<<endl;
for(i=1;i<=n;i++){
if(!out[i]||in[i])continue;
int j=i,w=d[i];
while(nx[j]){w=min(w,d[j]);j=nx[j];}
cout<<i<<" "<<j<<" "<<w<<endl;
}
}