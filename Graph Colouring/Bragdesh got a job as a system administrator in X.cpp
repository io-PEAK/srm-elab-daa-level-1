#include <bits/stdc++.h>
using namespace std;
int n,m,v,u;
int main(){
    cin>>n>>m>>v;
    if(m<n-1 || m>(n-1)*(n-2)/2+1) return cout<<"-1\n",0;
    for(int i=1;i<=n;i++) if(i!=v) cout<<i<<" "<<v<<"\n",u=i;
    m-=n-1;
    for(int i=1;i<=n && m;i++)
        for(int j=i+1;j<=n && m;j++)
            if(i!=v && j!=v && i!=u && j!=u) cout<<i<<" "<<j<<"\n",m--;
}