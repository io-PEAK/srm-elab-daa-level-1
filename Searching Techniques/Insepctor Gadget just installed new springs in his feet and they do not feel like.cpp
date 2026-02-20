#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    float a,b,c;
    if(s2=="?"){
        b=stof(s4);
        c=stof(s6);
        //cout<<c;
        cout<<"F "<<fixed<<setprecision(2)<<(-b)*c;
    }
    else if(s4=="?"){
        a=stof(s2);
        c=stof(s6);
        cout<<"K "<<fixed<<setprecision(2)<<a/(-c);
    }
    else
    {
        a=stof(s2);
        b=stof(s4);
        cout<<"X "<<fixed<<setprecision(2)<<a/(-b);
    }
    return 0;
}