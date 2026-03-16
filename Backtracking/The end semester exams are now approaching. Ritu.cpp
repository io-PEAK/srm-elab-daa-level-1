#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int N,mat[1001][1001];
long long dp[1001][1001];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

long long dfs(int x,int y){
    if(x<0||x>=N||y<0||y>=N)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    dp[x][y]=1;
    for(int k=0;k<4;k++){
        int nx=x+dx[k],ny=y+dy[k];
        if(nx>=0&&ny>=0&&mat[nx][ny]<mat[x][y])
            dp[x][y]=(dp[x][y]+dfs(nx,ny))%MOD;
    }
    return dp[x][y];
}

int main(){
    int i,j;
    cin>>N;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            cin>>mat[i][j];
    memset(dp,-1,sizeof(dp));
    long long ans=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            ans=(ans+dfs(i,j))%MOD;
    cout<<ans<<endl;
    return 0;
}