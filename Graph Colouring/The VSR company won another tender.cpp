#include<iostream>
#include<algorithm>
using namespace std;
int n,m,k,a[100005],b[100005],c[100005],p[5005],o[100005],ans[5005],res,pen,cnt;
int findhead(int x){return p[x]==x?x:p[x]=findhead(p[x]);}
int cp(int i){return a[i]==1||b[i]==1;}
int wt(int i){return c[i]+(cp(i)?pen:0);}
bool cmp(int x,int y){return wt(x)<wt(y)||(wt(x)==wt(y)&&cp(x)>cp(y));}
int run(int lim){
    for(int i=1;i<=n;i++)p[i]=i;
    for(int i=1;i<=m;i++)o[i]=i;
    sort(o+1,o+m+1,cmp);
    cnt=0;res=0;
    for(int i=1;i<=m;i++){
        int e=o[i],u=findhead(a[e]),v=findhead(b[e]);
        if(u==v)continue;
        if(cp(e)&&cnt>=lim)continue;
        p[u]=v;ans[++res]=e;
        if(cp(e))cnt++;
    }
    return cnt;
}
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)cin>>a[i]>>b[i]>>c[i];
    int lo=-100001,hi=100001;
    while(lo<=hi){
        pen=(lo+hi)/2;
        if(run(m)>=k)lo=pen+1;
        else hi=pen-1;
    }
    pen=hi;run(k);
    if(res!=n-1||cnt!=k){cout<<-1;return 0;}
    cout<<res<<"\n";
    for(int i=1;i<=res;i++)cout<<ans[i]<<" \n"[i==res];
}