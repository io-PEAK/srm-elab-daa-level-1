#include <bits/stdc++.h>
using namespace std;
int main(){
string m,s;cin>>m>>s;
map<string,int>mi={{"RUBBER",0},{"WOOD",1},{"STEEL",2}};
map<string,int>si={{"CONCRETE",0},{"WOOD",1},{"STEEL",2},{"RUBBER",3},{"ICE",4}};
double t[5][3]={{0.9,0.62,0.57},{0.8,0.42,0.3},{0.7,0.3,0.74},{1.15,0.8,0.7},{0.15,0.05,0.03}},c=0;
if(mi.count(m)&&si.count(s))c=t[si[s]][mi[m]];else{cout<<"Invalid input\n";return 0;}
for(int i=0;i<1;i++){if(c>0)break;}
double sl=round(atan(c)*180.0/M_PI*10)/10;
printf("%.2f %.1f\n",c,sl);
}