#include<bits/stdc++.h>
using namespace std;
int M,i,g[100005],al[100005];
int main(){
    cin>>M;
    vector<int> idx(M);
    for(i = 0; i < M; i++){cin>>g[i];idx[i]=i;}
    for(i = 0; i < M; i++) cin>>al[i];
    sort(idx.begin(),idx.end(),[](int a,int b){return g[a]<g[b];});
    for(int k=0;k<M;k++){
        i=idx[k];
        for(int j=max(0,i-10);j<=min(M-1,i+10);j++)
            if(g[j]<g[i]) al[i]=max(al[i],al[j]+1);
    }
    long long t=0;
    for(i = 0; i < M; i++) t+=al[i];
    cout<<t<<"\n";
}