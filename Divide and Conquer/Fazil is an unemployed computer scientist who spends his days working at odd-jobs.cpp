#include <bits/stdc++.h>
using namespace std;
string word;
long long dp[100][100];
long long calculate(int s, int e){
 if(s > e)
 return 0;
 if(s == e )
 return 1;
 if(dp[s][e] != -1)
 return dp[s][e];
 if(word[s] == word[e])
 return dp[s][e] = 1 + calculate(s+1, e) + calculate(s, e-1);
 else
 return dp[s][e] = calculate(s+1, e) + calculate(s, e-1) - calculate(s+1, e-1);
}
int main(){
 cin>>word;
 memset(dp, -1, sizeof dp);
 cout<<calculate(0,word.size()-1)<<endl;
 return 0;
 printf("long long calculate(int s,int e)");
}