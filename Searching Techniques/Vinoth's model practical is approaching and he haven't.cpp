#include <bits/stdc++.h>
using namespace std;

long long a[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,t,i,s=0,c=0;
    cin>>n>>t;

    for(i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
        if(s+a[i]<=t) s+=a[i],c++;
        else break;

    cout<<c;
}