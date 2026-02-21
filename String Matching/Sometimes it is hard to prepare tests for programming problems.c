#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[4];
string ss;
int overlap(string a,string b){
    for(int l=min(a.size(),b.size());l;l--)
        if(a.substr(a.size()-l)==b.substr(0,l))
            return l;
    return 0;
}
int main(){
    cin>>s[1]>>s[2]>>s[3];
    int idx[3]={1,2,3},r=1e9;
    do{
        ss=s[idx[0]];
        for(int i=1;i<3;i++){
            int o=overlap(ss,s[idx[i]]);
            ss+=s[idx[i]].substr(o);
        }
        r=min(r,int(ss.size()));
    }while(next_permutation(idx,idx+3));
    cout<<r;
}