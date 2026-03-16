#include<bits/stdc++.h>
using namespace std;
struct N{
    int A,B,C,f,g,h;
};
N lf(char c){
    int a=c=='a',b=c=='b',cc=c=='c';
    int mf=min(0,a-b),mg=min(0,b-cc);
    return {a,b,cc,mf,mg,min(0,b-cc+mf)};
}
N combine(N L,N R){
    return {L.A+R.A,L.B+R.B,L.C+R.C,
        min(L.f,L.A-L.B+R.f),
        min(L.g,L.B-L.C+R.g),
        min(L.h,min(L.f+L.B-L.C+R.g,L.A-L.C+R.h))};
}
N T[400005];
int n,q;string s;
void pull(int p){
    T[p]=combine(T[p*2],T[p*2+1]);
}
void build(int p,int l,int r){
    if(l==r){T[p]=lf(s[l-1]);return;}
    int m=(l+r)/2;
    build(p*2,l,m);
    build(p*2+1,m+1,r);
    pull(p);
}
void upd(int p,int l,int r,int i,char c){
    if(l==r){T[p]=lf(c);return;}
    int m=(l+r)/2;
    i<=m?upd(p*2,l,m,i,c):upd(p*2+1,m+1,r,i,c);
    pull(p);
}
int main(){
    cin>>n>>q;
    cin>>s;
    build(1,1,n);
    while(q--){
        int i;char c;
        cin>>i>>c;
        upd(1,1,n,i,c);
        cout<<T[1].C+T[1].h<<'\n';
    }
}