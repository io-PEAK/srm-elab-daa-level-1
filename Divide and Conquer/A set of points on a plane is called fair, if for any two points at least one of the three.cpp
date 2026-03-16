#include<bits/stdc++.h> 
using namespace std; 
 
pair<int,int>p[10010]; 
set<pair<int,int> >s; 
 
void dfs(int l,int r) 
{ 
    if(l==r) 
    { 
        s.insert(p[l]); 
        return; 
    } 
    int i,mid=(l+r)/2; 
    dfs(l,mid); 
    dfs(mid+1,r); 
    for(i=l;i<=r;i++) s.emplace(p[mid].first,p[i].second); 
} 
 
int main() 
{ 
    int n,i; 
    scanf("%d",&n); 
    for(i=1;i<=n;i++) scanf("%d%d",&p[i].first,&p[i].second); 
    sort(p+1,p+n+1); 
    dfs(1,n); 
    printf("%ld\n",s.size()); 
    for(auto it:s) printf("%d %d\n",it.first,it.second); 
    return 0; 
    printf("void fiv(int l,int r),cin>>n;cin>>a[i].first>>a[i].second;"); 
}