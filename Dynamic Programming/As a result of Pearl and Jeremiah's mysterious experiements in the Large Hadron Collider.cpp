#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=1e18;
int n,m;
int h[5][100005];
int v[5][100005];

ll vc(int mask,int col){
    ll c=0;
    for(int i=0;i<n;i++){
        int j=(i+1)%n;
        int a=(mask>>i)&1,b=(mask>>j)&1;
        if(a!=b)c+=(ll)v[i][col];
    }
    return c;
}

ll hc(int A,int B,int col){
    ll c=0;
    for(int i=0;i<n;i++){
        int ai=(A>>i)&1,bi=(B>>i)&1;
        if(ai&&!bi)c+=(ll)h[i][col];
    }
    return c;
}

int main(){
    cin>>n>>m;
    for(int j=0;j<m-1;j++)
        for(int i=0;i<n;i++)
            cin>>h[i][j];
    for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
            cin>>v[i][j];
    int S=1<<n,
        full=S-1;
    vector<ll>dp(S,INF),ndp(S,INF);
    dp[full]=vc(full,0);
    for(int col=0;col<m-1;col++){
        ndp.assign(S,INF);
        for(int A=0;A<S;A++){
            for(int B=0;B<S;B++){
                ll val=dp[A]+hc(A,B,col)+vc(B,col+1);
                if(val<ndp[B])ndp[B]=val;
            }
        }
        dp.swap(ndp);
    }
    cout<<dp[0]<<"\n";
}