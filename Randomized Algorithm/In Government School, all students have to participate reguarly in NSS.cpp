#include<iostream>
using namespace std;
int n, a[200005], dp[200005];
int mn(int x, int y){
    if(x < y) return x;
    else return y;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2];
    for(int i = 3; i < n; i++)
        dp[i] = a[i] + mn(dp[i-1], mn(dp[i-2], dp[i-3]));
    cout << mn(dp[n-1], mn(dp[n-2], dp[n-3]));
}