#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){ return a>b?a:b; }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin>>T;

    while(T--){
        int n,k,p;
        cin>>n>>k>>p;

        vector<vector<int>> pre(n,vector<int>(k+1,0));

        for(int i = 0;i < n;i++){                 // mandatory loop
            for(int j=1;j<=k;j++){
                int x; cin>>x;
                pre[i][j]=pre[i][j-1]+x;
            }
        }

        vector<vector<int>> dp(n+1,vector<int>(p+1,0));

        for(int i=1;i<=n;i++){
            for(int j=0;j<=p;j++){
                for(int x=0;x<=min(k,j);x++){
                    dp[i][j]=max(dp[i][j],dp[i-1][j-x]+pre[i-1][x]);
                }
            }
        }

        cout<<dp[n][p]<<"\n";
    }
}