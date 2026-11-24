#include <stdio.h>

int n, m, map[502][502] = { 0 }, chk[502][502] = { 0 }, max = 0, flg = 0, now = 1;

void dfs(int x, int y) {
    if(map[x + 1][y] == 1 && chk[x + 1][y] == 0) { ++now; chk[x + 1][y] = flg; dfs(x + 1, y); }
    if(map[x - 1][y] == 1 && chk[x - 1][y] == 0) { ++now; chk[x - 1][y] = flg; dfs(x - 1, y); }
    if(map[x][y + 1] == 1 && chk[x][y + 1] == 0) { ++now; chk[x][y + 1] = flg; dfs(x, y + 1); }
    if(map[x][y - 1] == 1 && chk[x][y - 1] == 0) { ++now; chk[x][y - 1] = flg; dfs(x, y - 1); }
}

int main(void) {
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            scanf("%d", &map[i][j]);
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(map[i][j] == 1 && chk[i][j] == 0) {
                now = 1; chk[i][j] = ++flg;
                dfs(i, j);

                if(max < now) max = now;
            }
        }
    }
    
    printf("%d\n%d", flg, max);

    return 0;   
}