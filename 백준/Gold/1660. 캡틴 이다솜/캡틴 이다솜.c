#include <stdio.h>

int pyramid(int n) {
    return n * (n + 1) * (n + 2) / 6;
}
int min(int n1, int n2) {
    return n1 < n2 ? n1 : n2;
}

int main(void) {
    int n; scanf("%d", &n);

    int dp[300001] = { 0 };
    for(int i = 1; i <= n; ++i) dp[i] = i;
    int py[205] = { 0 };
    int lim = 1;
    for(; pyramid(lim) <= n; ++lim) {
        py[lim] = pyramid(lim);
    }
    for(int i = 2; i <= lim; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(j - py[i] >= 0) dp[j] = min(dp[j], dp[j - py[i]] + 1);
        }
    }

    printf("%d", dp[n]);

	return 0;
}