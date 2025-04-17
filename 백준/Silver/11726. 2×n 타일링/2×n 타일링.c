#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int dp[1005] = { 0, 1, 2 };
    for(int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    printf("%d", dp[n]);

    return 0;
}