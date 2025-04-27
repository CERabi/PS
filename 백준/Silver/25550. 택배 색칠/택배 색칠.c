#include <stdio.h>

long long box[1001][1001] = { 0 };

long long min(int x, int y) {
    long long min = 10000000001;
    min = min < box[x + 1][y] ? min : box[x + 1][y];
    min = min < box[x - 1][y] ? min : box[x - 1][y];
    min = min < box[x][y + 1] ? min : box[x][y + 1];
    min = min < box[x][y - 1] ? min : box[x][y - 1];

    return min;
}

int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) scanf("%lld", &box[i][j]);
    }

    long long cnt = 0;
    for(int i = 1; i < n - 1; ++i) {
        for(int j = 1; j < m - 1; ++j) {
            if(box[i][j] == 0) continue;
            long long lowest = min(i, j);
            if(lowest >= box[i][j]) cnt += box[i][j] - 1;
            else cnt += lowest;
        }
    }

    printf("%lld", cnt);

    return 0;
}