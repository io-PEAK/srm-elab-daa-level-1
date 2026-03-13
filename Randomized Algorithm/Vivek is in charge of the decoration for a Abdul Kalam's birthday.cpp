#include <iostream>
using namespace std;

int main(){
    int N; cin>>N;
    long long x,mx=-1; int cnt=0;
    for(int i=0;i<N;i++){
        cin>>x;
        if(x>mx) mx=x,cnt=1;
        else if(x==mx) cnt++;
    }
    cout<<cnt;
}