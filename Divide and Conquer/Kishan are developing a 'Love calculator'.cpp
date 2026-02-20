#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
P shortestString[35][35];
bool vis[35][35];
string name1,name2;
int m,n;
P solve(int i,int j){
    if(vis[i][j]) return shortestString[i][j];
    vis[i][j]=1;
    if(i==m) return shortestString[i][j]={n-j,1};
    if(j==n) return shortestString[i][j]={m-i,1};
    if(name1[i]==name2[j]){P s=solve(i+1,j+1);return shortestString[i][j]={1+s.first,s.second};}
    P a=solve(i+1,j),b=solve(i,j+1);
    a.first++;b.first++;
    ll len=min(a.first,b.first);
    ll c=(a.first==len?a.second:0)+(b.first==len?b.second:0);
    return shortestString[i][j]={len,c};
}
int main(){
    while(cin>>name1>>name2){
        cin>>name1>>name2;
        m=name1.size();n=name2.size();
        memset(vis,0,sizeof(vis));
        solve(0,0);
        cout<<shortestString[0][0].first<<" "<<shortestString[0][0].second<<"\n";
    }
}