#include <bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);

int T;cin>>T;
while(T--){

int n,k;cin>>n>>k;

vector<int>a(n);
int i;
for(i=0;i<n;++i)cin>>a[i];

vector<int>L(k+1,1e9),R(k+1,-1);

for(i=0;i<n;++i){
L[a[i]]=min(L[a[i]],i);
R[a[i]]=max(R[a[i]],i);
}

long long dpL=0,dpR=0;

for(int v=2;v<=k;v++){
long long nL=max(dpL+llabs(L[v]-L[v-1]),dpR+llabs(L[v]-R[v-1]));
long long nR=max(dpL+llabs(R[v]-L[v-1]),dpR+llabs(R[v]-R[v-1]));
dpL=nL;dpR=nR;
}

cout<<max(dpL,dpR)<<"\n";
}
}