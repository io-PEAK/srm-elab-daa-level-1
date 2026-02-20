#include<bits/stdc++.h>
using namespace std;
int n,b[11][11],col[11],d1[21],d2[21],i;
int safe(int r,int c){return !col[c]&&!d1[r+c]&&!d2[r-c+10];}
int solve(int r){
    if(r==n) return 1;
    for(int c=0;c<n;++c)
        if(safe(r,c)){
            b[r][c]=col[c]=d1[r+c]=d2[r-c+10]=1;
            if(solve(r+1)) return 1;
            b[r][c]=col[c]=d1[r+c]=d2[r-c+10]=0;
        }
    return 0;
}
int main(){
    cin>>n;
    if(n==1){cout<<1;return 0;}
    if(n<4){cout<<"Not possible";return 0;}
    solve(0);
    for(i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<b[i][j];
            if(i<n-1||j<n-1) cout<<" ";
        }
        if(i<n-1) cout<<"\n";
    }
}