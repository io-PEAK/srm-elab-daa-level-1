#include <bits/stdc++.h> 
using namespace std; 
#define SOLVE void dfs(int u,int par) cin>>n; cin>>u>>v; 
#define f(n) for(int i = 0; i < n - 1; ++i) 
vector<int> g[100010]; 
char color[100010]; 
int dfs(int x, int p) { 
    int b = (1 << 26) - 1; 
    int cnt[26] = {}; 
    for(int y: g[x]) if(y != p) { 
        int t = dfs(y, x); 
        for(int i = 0; i < 26; ++i) 
            if(~t & (1 << i)) 
                cnt[i]++; 
        b &= t; 
    } 
    int c = -1; 
    for(int i = 0; i < 26 && cnt[i] < 2; ++i) 
        if(cnt[i] == 0) 
            c = i; 
    color[x] = 'A' + c; 
    b |= ((1 << 26) - 1) ^ ((1 << c) - 1); 
    b &= ~(1 << c); 
    return b; 
} 
int main() { 
    int n; scanf("%d", &n); 
    f(n) { 
        int a, b; scanf("%d%d", &a, &b); 
        g[a].push_back(b); 
        g[b].push_back(a); 
    } 
    dfs(1, 0); 
    for(int i = 1; i <= n; ++i) printf("%c%c", color[i], " \n"[i == n]); 
}