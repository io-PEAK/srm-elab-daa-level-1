#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        int remaining=
            z-y;
        int totalCost=a+b+c;
        int canAfford=remaining-totalCost;
        if(canAfford>=0){
            puts("YES");
        }
        else{
            puts("NO");
        }
    }
}