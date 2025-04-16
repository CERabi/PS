#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int stair[305] = { 0 };
    for(int i = 1; i <= n; ++i) scanf("%d", &stair[i]);

    int dp[305] = { 0 }; dp[1] = stair[1]; dp[2] = stair[1] + stair[2];
    for(int i = 3; i <= n; ++i) {
        if(dp[i] < dp[i - 2] + stair[i]) dp[i] = dp[i - 2] + stair[i];
        if(dp[i] < dp[i - 3] + stair[i - 1] + stair[i]) dp[i] = dp[i - 3] + stair[i - 1] + stair[i];
    }

    printf("%d", dp[n]);

    return 0;
}