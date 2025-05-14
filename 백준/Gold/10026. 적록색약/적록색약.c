#include <stdio.h>

typedef struct _point {
    int x, y;
} point;
int map[102][102], chk1[102][102], chk2[102][102];

void bfs1(point);
void bfs2(point);

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        //char str[105]; scanf("%s", str);
        //for(int j = 1; j <= n; ++j) map[i][j] = str[j - 1];
        for(int j = 1; j <= n; ++j) scanf(" %1c", &map[i][j]);
    }

    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            point p = { i, j };
            if(chk1[i][j] == 0) { bfs1(p); ++cnt1; }
            if(chk2[i][j] == 0) { bfs2(p); ++cnt2; }
        }
    }

    printf("%d %d", cnt1, cnt2);

    return 0;
}

void bfs1(point p) {
    point queue[10000];
    int f = 0, r = 0;
    chk1[p.x][p.y] = 1; queue[r++] = p;
    while(f < r) {
        if(chk1[queue[f].x][queue[f].y + 1] == 0 && map[queue[f].x][queue[f].y + 1] == map[queue[f].x][queue[f].y]) {
            chk1[queue[f].x][queue[f].y + 1] = 1;
            point p_tmp = { queue[f].x, queue[f].y + 1 };
            queue[r++] = p_tmp;
        }
        if(chk1[queue[f].x][queue[f].y - 1] == 0 && map[queue[f].x][queue[f].y - 1] == map[queue[f].x][queue[f].y]) {
            chk1[queue[f].x][queue[f].y - 1] = 1;
            point p_tmp = { queue[f].x, queue[f].y - 1 };
            queue[r++] = p_tmp;
        }
        if(chk1[queue[f].x + 1][queue[f].y] == 0 && map[queue[f].x + 1][queue[f].y] == map[queue[f].x][queue[f].y]) {
            chk1[queue[f].x + 1][queue[f].y] = 1;
            point p_tmp = { queue[f].x + 1, queue[f].y };
            queue[r++] = p_tmp;
        }
        if(chk1[queue[f].x - 1][queue[f].y] == 0 && map[queue[f].x - 1][queue[f].y] == map[queue[f].x][queue[f].y]) {
            chk1[queue[f].x - 1][queue[f].y] = 1;
            point p_tmp = { queue[f].x - 1, queue[f].y };
            queue[r++] = p_tmp;
        }
        ++f;
    }
}

void bfs2(point p) {
    point queue[10000];
    int f = 0, r = 0;
    chk2[p.x][p.y] = 1; queue[r++] = p;
    if(map[p.x][p.y] == 'B') {
        while(f < r) {
            if(chk2[queue[f].x][queue[f].y + 1] == 0 && map[queue[f].x][queue[f].y + 1] == 'B') {
                chk2[queue[f].x][queue[f].y + 1] = 1;
                point p_tmp = { queue[f].x, queue[f].y + 1 };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x][queue[f].y - 1] == 0 && map[queue[f].x][queue[f].y - 1] == 'B') {
                chk2[queue[f].x][queue[f].y - 1] = 1;
                point p_tmp = { queue[f].x, queue[f].y - 1 };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x + 1][queue[f].y] == 0 && map[queue[f].x + 1][queue[f].y] == 'B') {
                chk2[queue[f].x + 1][queue[f].y] = 1;
                point p_tmp = { queue[f].x + 1, queue[f].y };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x - 1][queue[f].y] == 0 && map[queue[f].x - 1][queue[f].y] == 'B') {
                chk2[queue[f].x - 1][queue[f].y] = 1;
                point p_tmp = { queue[f].x - 1, queue[f].y };
                queue[r++] = p_tmp;
            }
            ++f;
        }
    }
    else {
        while(f < r) {
            if(chk2[queue[f].x][queue[f].y + 1] == 0 && (map[queue[f].x][queue[f].y + 1] == 'R' || map[queue[f].x][queue[f].y + 1] == 'G')) {
                chk2[queue[f].x][queue[f].y + 1] = 1;
                point p_tmp = { queue[f].x, queue[f].y + 1 };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x][queue[f].y - 1] == 0 && (map[queue[f].x][queue[f].y - 1] == 'R' || map[queue[f].x][queue[f].y - 1] == 'G')) {
                chk2[queue[f].x][queue[f].y - 1] = 1;
                point p_tmp = { queue[f].x, queue[f].y - 1 };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x + 1][queue[f].y] == 0 && (map[queue[f].x + 1][queue[f].y] == 'R' || map[queue[f].x + 1][queue[f].y] == 'G')) {
                chk2[queue[f].x + 1][queue[f].y] = 1;
                point p_tmp = { queue[f].x + 1, queue[f].y };
                queue[r++] = p_tmp;
            }
            if(chk2[queue[f].x - 1][queue[f].y] == 0 && (map[queue[f].x - 1][queue[f].y] == 'R' || map[queue[f].x - 1][queue[f].y] == 'G')) {
                chk2[queue[f].x - 1][queue[f].y] = 1;
                point p_tmp = { queue[f].x - 1, queue[f].y };
                queue[r++] = p_tmp;
            }
            ++f;
        }
    }
}
