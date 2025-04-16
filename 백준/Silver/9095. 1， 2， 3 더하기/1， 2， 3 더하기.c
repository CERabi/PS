#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int hap[13] = { 0, 1, 2, 4, };
    for(int i = 4; i <= 13; ++i) {
        hap[i] = hap[i - 1] + hap[i - 2] + hap[i - 3];
    }

    while(n--) {
        int k; scanf("%d", &k);
        printf("%d\n", hap[k]);
    }

    return 0;
}