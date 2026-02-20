#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    long long x,ans=LLONG_MAX;
    set<long long> s;
    cin>>x;s.insert(x);
    while(--n){
        cin>>x;
        auto it=s.upper_bound(x);
        if(it!=s.end()) ans=min(ans,*it-x);
        s.insert(x);
    }
    cout<<ans<<"\n";
}