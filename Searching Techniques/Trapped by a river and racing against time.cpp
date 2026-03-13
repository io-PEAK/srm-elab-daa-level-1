#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    getline(cin,name);

    int ramp1;
    double rate1,width;

    cin>>ramp1>>rate1>>width;

    double time1=sqrt(2.0*ramp1/rate1);
    double speed1=time1*rate1;
    double distance=speed1*speed1/9.805;

    string result;

    if(distance < width-5) result="SPLASH!";
    else if(distance <= width) result="BARELY MADE IT!";
    else result="LIKE A BOSS!";

    cout<<fixed<<setprecision(2);
    cout<<name<<" will reach a speed of "<<speed1<<" m/s on a "<<ramp1<<" ramp crossing ";

    cout<<setprecision(1)<<distance<<" of "<<width<<" meters, "<<result;
}