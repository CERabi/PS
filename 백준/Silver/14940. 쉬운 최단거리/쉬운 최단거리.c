#include <stdio.h>

typedef struct _point {
    int x, y;
} point;

point p[1000005];
int chk[1002][1002], map[1002][1002], f, r;

int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            scanf("%d", &map[i][j]);
            if(map[i][j] == 2) {
                p[r].x = i;
                p[r].y = j;
                ++r;
            }
        }
    }

    while(f < r) {
        if(map[p[f].x + 1][p[f].y] == 1 && chk[p[f].x + 1][p[f].y] == 0) {
            chk[p[f].x + 1][p[f].y] = chk[p[f].x][p[f].y] + 1;
            p[r].x = p[f].x + 1; p[r].y = p[f].y;
            ++r;
        }
        if(map[p[f].x - 1][p[f].y] == 1 && chk[p[f].x - 1][p[f].y] == 0) {
            chk[p[f].x - 1][p[f].y] = chk[p[f].x][p[f].y] + 1;
            p[r].x = p[f].x - 1; p[r].y = p[f].y;
            ++r;
        }
        if(map[p[f].x][p[f].y + 1] == 1 && chk[p[f].x][p[f].y + 1] == 0) {
            chk[p[f].x][p[f].y + 1] = chk[p[f].x][p[f].y] + 1;
            p[r].x = p[f].x; p[r].y = p[f].y + 1;
            ++r;
        }
        if(map[p[f].x][p[f].y - 1] == 1 && chk[p[f].x][p[f].y - 1] == 0) {
            chk[p[f].x][p[f].y - 1] = chk[p[f].x][p[f].y] + 1;
            p[r].x = p[f].x; p[r].y = p[f].y - 1;
            ++r;
        }
        ++f;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(chk[i][j] == 0 && map[i][j] == 1) chk[i][j] = -1;
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            printf("%d ", chk[i][j]);
        }
        printf("\n");
    }

    return 0;
}