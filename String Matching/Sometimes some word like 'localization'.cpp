#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
string s; 
cin>>s; 
int len=s.size(); 
if(s.size()<=10){ 
cout<<s; 
} 
else{ 
cout<<s[0]<<s.size()-2<<s[len-1]; 
} 
}