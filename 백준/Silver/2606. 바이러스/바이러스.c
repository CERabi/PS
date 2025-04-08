#include <stdio.h>

int main(void) {
    int com, n; scanf("%d %d", &com, &n);
    int map[101][101] = { 0 };
    for(int i = 0; i < n; ++i) {
        int t1, t2; scanf("%d %d", &t1, &t2);
        map[t1][t2] = 1; map[t2][t1] = 1;
    }

    int chk[101] = { 0, 1,  }, queue[101] = { 1,  }, f = 0, r = 1, cnt = 0;
    while(f < r) {
        for(int i = 1; i <= com; ++i) {
            if(!chk[i] && map[queue[f]][i]) {
                queue[r++] = i; ++chk[i]; ++cnt;
            }
        }
        ++f;
    }

    printf("%d", cnt);

    return 0;
}