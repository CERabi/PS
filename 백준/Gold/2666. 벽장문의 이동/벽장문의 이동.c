#include <stdio.h>
#include <limits.h>

int sel[25] = { 0 }, dap = INT_MAX, n, m;

int abs(int n1) {
    if(n1 > 0) return n1;
    else return -1 * n1;
}
void dfs(int door1, int door2, int now, int len) {
    if(len > dap) return;
    if(now == m) {
        if(dap > len) dap = len;
        return;
    }
    dfs(door1, sel[now], now + 1, len + abs(sel[now] - door2));
    dfs(sel[now], door2, now + 1, len + abs(sel[now] - door1));
}

int main(void) {
    int d1, d2; scanf("%d %d %d %d", &n, &d1, &d2, &m);
    for(int i = 0; i < m; ++i) scanf("%d", &sel[i]);
    dfs(d1, d2, 0, 0);
    printf("%d", dap);

    return 0;
}
