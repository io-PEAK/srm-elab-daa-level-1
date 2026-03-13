#include<iostream>
#include<vector>
#include<set>
#include<sstream>
using namespace std;

int main(){
string s;cin>>s;
set<int> st;stringstream ss(s);
while(ss.good()){string x;getline(ss,x,',');st.insert(stoi(x));}
vector<int> v(st.begin(),st.end());
for(size_t i=0;i<v.size();){
int l=v[i],r=l;
while(i+1<v.size()&&v[i+1]==v[i]+1)i++,r=v[i];
cout<<l; if(l!=r) cout<<"-"<<r;
if(i+1<v.size()) cout<<",";
i++;
}
}