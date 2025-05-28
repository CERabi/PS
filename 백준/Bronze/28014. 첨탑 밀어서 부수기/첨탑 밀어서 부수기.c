#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int prev = 10000000, cnt = 1;
    while(n--) {
        int now; scanf("%d", &now);
        if(now >= prev) ++cnt;
        prev = now;
    }

    printf("%d", cnt);

    return 0;
}
