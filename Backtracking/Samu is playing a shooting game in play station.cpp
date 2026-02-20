#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

double dp[1005][2005];

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int X, Y, N, W, P1, P2;
        scanf("%d%d%d%d%d%d", &X, &Y, &N, &W, &P1, &P2);

        memset(dp, 0, sizeof(dp));
        for (int n = 0; n <= N; n++)
            for (int s = W; s <= W + N*max(X,Y); s++)
                dp[n][s] = 1.0;

        for (int n = 0; n <= N; n++)
            for (int s = W + N * max(X,Y) + 1; s <= W + N * max(X,Y) + 10; s++)
                dp[n][s] = 1.0; // for safety in overflows

        for (int n = 0; n <= N; n++)
            for (int s = W-1; s >= 0; s--)
                dp[0][s] = 0.0;

        for (int n = 1; n <= N; n++) {
            for (int s = W - 1; s >= 0; s--) {
                double p1 = P1 / 100.0, p2 = P2 / 100.0;
                double pick1 = p1 * dp[n-1][min(s+X, W+N*max(X,Y))] + (1-p1) * dp[n-1][s];
                double pick2 = p2 * dp[n-1][min(s+Y, W+N*max(X,Y))] + (1-p2) * dp[n-1][s];
                dp[n][s] = max(pick1, pick2);
            }
        }
        printf("%.6f\n", dp[N][0]*100);
    }
    return 0;
}