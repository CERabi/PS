#include <stdio.h>
#include <string.h>

int map[1005][1005];

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        int x, y, xlen, ylen; scanf("%d %d %d %d", &x, &y, &xlen, &ylen);
        for(int j = x; j < x + xlen; ++j) {
            for(int k = y; k < y + ylen; ++k) map[j][k] = i;
        }
    }

    int cnt[101] = { 0 };
    for(int i = 0; i <= 1001; ++i) {
        for(int j = 0; j <= 1001; ++j) ++cnt[map[i][j]];
    }

    for(int i = 1; i <= n; ++i) printf("%d\n", cnt[i]);

    return 0;
}