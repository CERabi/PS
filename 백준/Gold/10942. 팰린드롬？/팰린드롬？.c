#include <stdio.h>

int num[2002] = { 0 }, dp[2002][2002] = { 0 };

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &num[i]);
        dp[i][i] = 1;
        if(i != 1 && num[i - 1] == num[i]) dp[i - 1][i] = 1;
    }

    /*
    중간이 펠린드롬 + 시작과 맨 끝이 같음 -> 펠린드롬
    */
    for(int len = 2; len <= n - 1; ++len) {
        for(int ptr = 1; ptr <= n - len; ++ptr) {
            if(num[ptr] == num[ptr + len] && dp[ptr + 1][ptr + len - 1]) {
                dp[ptr][ptr + len] = 1;
            }
        }
    }

    int m; scanf("%d", &m);
    while(m--) {
        int st, ed; scanf("%d %d", &st, &ed);
        printf("%d\n", dp[st][ed]);
    }

    return 0;
}