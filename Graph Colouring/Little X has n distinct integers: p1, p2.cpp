#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);

    vector<int> p(n);
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        mp[p[i]] = 1;
    }

    vector<int> ans(n,0);
    bool ok = true;

    for(int i=0;i<n;i++){
        bool A = mp.count(a - p[i]);
        bool B = mp.count(b - p[i]);

        if(!A && !B) ok = false;
        if(!A && B) ans[i] = 1;
    }

    if(ok){
        printf("YES\n");
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]);
    }else{
        printf("NO");
    }
}