#include <stdio.h>

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        int n, m; scanf("%d %d", &n, &m);
        int cnt[10] = { 0 }, chk[10] = { 0 }, queue[10000] = { 0 }, f = 0, r = 0;
        for(int i = 0; i < n; ++i) {
            int tmp; scanf("%d", &tmp);
            ++cnt[tmp]; queue[r++] = tmp;
        }
        int now = 9, dap = 0;
        while(f <= r) {
            for(; now > 0; --now) {
                if(cnt[now] != chk[now]) break;
            }
            if(queue[f] != now) {
                if(f == m) m = r;
                queue[r++] = queue[f];
            }
            else {
                ++chk[queue[f]];
                dap++;
                if(f == m) break;
            }
            ++f;
        }
        printf("%d\n", dap);
    }

    return 0;
}