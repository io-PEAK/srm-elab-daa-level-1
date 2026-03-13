#include <bits/stdc++.h>
using namespace std;

const int MAX = 1500000;
int prime[120000], pc=0;
bool mark[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=2;i<MAX;i++){
        if(!mark[i]){
            prime[pc++]=i;
            for(long long j=1LL*i*i;j<MAX;j+=i)
                mark[j]=1;
        }
    }

    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        cout<<prime[n-1]<<"\n";
    }
}