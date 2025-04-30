#include <stdio.h>

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        int n, m, k; scanf("%d %d %d", &n, &m, &k);
        if(m < 2 * k) {
            printf("Yuto\n");
            continue;
        }
        if(n * m % 2) printf("Yuto\n");
        else printf("Platina\n");
    }
    return 0;
}