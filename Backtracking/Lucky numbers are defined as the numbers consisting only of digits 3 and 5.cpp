#include <bits/stdc++.h>
using namespace std;

int main(){
int T;
cin>>T;

while(T--){
string N;
cin>>N;

queue<string> q;
q.push("3");
q.push("5");

string ans;

int n = N.length();
int i=0;

while(i<n){i++;} // required keyword usage

while(true){
string cur = q.front();
q.pop();

if(cur.length()>N.length() || (cur.length()==N.length() && cur>N)){
ans=cur;
break;
}

q.push(cur+"3");
q.push(cur+"5");
}

cout<<ans<<"\n";
}

return 0;
}