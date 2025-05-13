#include <stdio.h>

int chk[1001], entry[1001], map[1001][1001];

void bfs(int, int);

int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; ++i) {
        int u, v; scanf("%d %d", &u, &v);
        map[u][v] = 1; map[v][u] = 1;
        entry[u] = 1; entry[v] = 1;
    }

    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
        if(entry[i] == 1 && chk[i] == 0) {
            ++cnt;
            bfs(i, n);
        }
        else if(entry[i] == 0) ++cnt;
    }

    printf("%d", cnt);

    return 0;
}

void bfs(int st, int n) {
    int queue[100001] = { 0 }, f = 0, r = 0;
    queue[r++] = st; chk[st] = 1;
    while(f < r) {
        for(int i = 1; i <= n; ++i) {
            if(!chk[i] && map[queue[f]][i]) {
                queue[r++] = i; chk[i] = 1;
            }
        }
        ++f;
    }
}