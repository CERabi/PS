#include <stdio.h>
#include <limits.h>

int dp[1000002] = { 0, 0, 1, 1, };

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        if(i % 3 == 0 && dp[i] > dp[i / 3] + 1) dp[i] = dp[i / 3] + 1;
        if(i % 2 == 0 && dp[i] > dp[i / 2] + 1) dp[i] = dp[i / 2] + 1;
    }

    printf("%d", dp[n]);

    return 0;
}