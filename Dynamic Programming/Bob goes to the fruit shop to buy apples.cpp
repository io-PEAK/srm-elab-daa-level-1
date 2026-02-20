#include <iostream>
#include <algorithm>
using namespace std;
void copy(int* v,int* p,int* vit,int* pri,int n){
    for(int i=0;i<n;i++)
    {vit[i]=v[i];pri[i]=p[i];}}

void sortByPrice(int* v,int* p,int n){
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]>p[j]){
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;

                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }}}
}

int findMaxVit(int* v,int* p,int n,int m){
    int maxVit=0,maxPri=0;
    for(int i=0;i<n;i++){
        maxPri+=p[i];
        if(maxPri<=m)
        maxVit+=v[i];
        else
        break;}
    return maxVit;}

int ans(int* maxVit,int n){
    sort(maxVit,maxVit+n);
    return maxVit[n-1];}

int fun(int* vit,int* pri,int n,int m){
    int v[n],p[n],maxVit[n];
    for(int i=0;i<n;i++){
        copy(vit,pri,v,p,n);p[i]/=2;
        sortByPrice(v,p,n);
        maxVit[i]=findMaxVit(v,p,n,m);}
    return ans(maxVit,n);
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int v[n],p[n];
        for(int i=0;i<n;i++)
        cin>>v[i]>>p[i];
        cout<<fun(v,p,n,m)<<"\n";}
    int n=2,i;
    for(i=1;i<=n;i++)
    
    return 0;}