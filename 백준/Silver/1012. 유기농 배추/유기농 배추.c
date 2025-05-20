#include <stdio.h>

typedef struct _point {
    int x, y;
} point;

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        int m, n, k; scanf("%d %d %d", &m, &n, &k);
        int map[52][52] = { 0 }, chk[52][52] = { 0 };
        while(k--) {
            int x, y; scanf("%d %d", &x ,&y);
            map[x + 1][y + 1] = 1;
        }

        int cnt = 0;
        for(int i = 1; i <= m; ++i) {
            for(int j = 1; j <= n; ++j) {
                if(!chk[i][j] && map[i][j]) {
                    ++cnt;
                    point q[5000]; int f = 0, r = 0;
                    q[r].x = i; q[r].y = j; chk[i][j] = 1; ++r;
                    while(f < r) {
                        if(map[q[f].x + 1][q[f].y] && !chk[q[f].x + 1][q[f].y]) {
                            q[r].x = q[f].x + 1; q[r].y = q[f].y;
                            chk[q[f].x + 1][q[f].y] = 1; ++r;
                        }
                        if(map[q[f].x - 1][q[f].y] && !chk[q[f].x - 1][q[f].y]) {
                            q[r].x = q[f].x - 1; q[r].y = q[f].y;
                            chk[q[f].x - 1][q[f].y] = 1; ++r;
                        }
                        if(map[q[f].x][q[f].y + 1] && !chk[q[f].x][q[f].y + 1]) {
                            q[r].x = q[f].x; q[r].y = q[f].y + 1;
                            chk[q[f].x][q[f].y + 1] = 1; ++r;
                        }
                        if(map[q[f].x][q[f].y - 1] && !chk[q[f].x][q[f].y - 1]) {
                            q[r].x = q[f].x; q[r].y = q[f].y - 1;
                            chk[q[f].x][q[f].y - 1] = 1; ++r;
                        }
                        ++f;
                    }
                }
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}