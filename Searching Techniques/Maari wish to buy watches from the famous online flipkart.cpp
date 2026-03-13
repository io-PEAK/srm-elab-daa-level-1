#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,d,m,s,c=0;
    cin>>p>>d>>m>>s;

    while(p<=s){
        s-=p;
        c++;
        if(p-d>m) p-=d;
        else p=m;
    }

    cout<<c;
}