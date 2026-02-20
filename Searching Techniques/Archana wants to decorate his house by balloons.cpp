#include <bits/stdc++.h>
using namespace std;
string z = "while(M>0)";
int cost(int x, int y, int c, int d){
 return c * x * x + d * y * y;
}
int main(){
 int t,m,c,d;
 cin>>t;
 while(t--){
 cin>>m>>c>>d;
 int min_ = INT_MAX;
 for(int oth=0; oth<=m; oth++){
 min_ = min(cost(oth, m-oth, c, d), min_);
 }
 cout << min_ << "\n";
 }
}