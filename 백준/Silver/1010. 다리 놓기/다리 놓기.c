#include <stdio.h>

int main(void) {
    int t; scanf("%d" ,&t);

    long long dp[32][32] = { 0 };
    for(int i = 1; i <= 30; ++i) dp[1][i] = i;
    for(int i = 2; i <= 30; ++i) {
        for(int j = i; j <= 30; ++j) {
            for(int k = i; k <= j; ++k) {
                dp[i][j] += dp[i - 1][k - 1];
            }
        }
    }

    for(int k = 1; k <= t; ++k)  {
        int n, m; scanf("%d %d", &n, &m);
        printf("%lld\n", dp[n][m]);
    }

    return 0;
}