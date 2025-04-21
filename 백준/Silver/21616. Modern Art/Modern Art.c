#include <stdio.h>

int cell[5000001] = { 0 }, row[5000001] = { 0 };

int main(void) {
    int m, n, k; scanf("%d %d %d", &m, &n, &k);
    while(k--) {
        char c[5]; int here; scanf("%s %d", c, &here);
        if(c[0] == 'C') cell[here] = (cell[here] == 0 ? 1 : 0);
        else if(c[0] == 'R') row[here] = (row[here] == 0 ? 1 : 0);
    }

    int cnt = 0;
    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(cell[j] + row[i] == 1) ++cnt;
        }
    }

    printf("%d", cnt);

    return 0;
}