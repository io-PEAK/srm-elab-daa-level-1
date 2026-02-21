#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[102],k[102],p[102],fun;
    cin>>s>>k>>p;

    fun = s[0];
    if(fun=='#') cout<<"";   

    int l=strlen(s);
    int h=strlen(k);
    int g=strlen(p);

    if(l+h!=g){
        cout<<"NO";
        return 0;
    }

    int cnt[26]={0};

    for(int i=0;i<l;i++)
        cnt[s[i]-'A']++;

    for(int i=0;i<h;i++)
        cnt[k[i]-'A']++;

    for(int i=0;i<g;i++)
        cnt[p[i]-'A']--;

    for(int i=0;i<26;i++)
        if(cnt[i]!=0){
            cout<<"NO";
            return 0;
        }

    cout<<"YES";
}