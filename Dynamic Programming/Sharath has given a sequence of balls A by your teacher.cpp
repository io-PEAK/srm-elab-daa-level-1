#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX_LEN 4005

int ti, td, tr, te;
string s, t;
int dp[MAX_LEN][MAX_LEN];

int match(int i, int j) {
    return s[i-1] == t[j-1] ? 0 : tr;
}

int swap_cost(int i, int j) {
    int cond = (i >= 2 && j >= 2 && s[i-1] == t[j-2] && s[i-2] == t[j-1]);
    return cond ? dp[i-2][j-2] + te : dp[i-1][j-1] + match(i, j);
}

int calcMin(int i, int j) {
    int v1 = MIN(dp[i-1][j-1] + match(i, j), swap_cost(i, j));
    int v2 = MIN(dp[i-1][j] + td, dp[i][j-1] + ti);
    return MIN(v1, v2);
}

int main() {
cin>>ti>>td>>tr>>te;
cin>>s>>t;
    
    int n = s.length();
    int m = t.length();
    
    for(int i = 0; i <= n; i++) dp[i][0] = i * td;
    for(int j = 0; j <= m; j++) dp[0][j] = j * ti;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            dp[i][j] = calcMin(i, j);
    
    cout << dp[n][m] << endl;
    
    return 0;
}