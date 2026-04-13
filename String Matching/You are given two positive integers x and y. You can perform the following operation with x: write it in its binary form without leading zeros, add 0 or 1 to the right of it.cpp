#include<bits/stdc++.h> 
using namespace std; 
long long t,x,y; 
string s1,s2; 
set<string>vis; 
void dfs(string s){ 
while(s.back()=='0')s.pop_back(); 
if(s.size()>65||vis.count(s))return ; 
vis.insert(s); 
reverse(s.begin(),s.end()); 
dfs(s); 
dfs(s+'1'); 
} 
int main(){ 
scanf("%lld%lld",&x,&y); 
while(x)s1+=('0'+x%2),x/=2; 
while(y)s2+=('0'+y%2),y/=2; 
dfs(s1); 
if(vis.count(s2))printf("YES\n"); 
else printf("NO\n"); 
}