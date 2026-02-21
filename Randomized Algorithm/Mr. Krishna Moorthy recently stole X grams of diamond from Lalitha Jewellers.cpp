#include<iostream>
using namespace std;
int n,x,a,v,dp[4001];
int main(){
    cin>>n>>x;
    int i=0;
    while(i<x)dp[++i]=-1;
    for(i=0;i<n;i++){
        cin>>v>>a;
        for(int j=x;j>=a;j--)
            if(dp[j-a]>=0)
                if(dp[j-a]+v>dp[j])
                    dp[j]=dp[j-a]+v;
    }
    if(dp[x]>0)cout<<dp[x];
    else cout<<"Got caught!";
}