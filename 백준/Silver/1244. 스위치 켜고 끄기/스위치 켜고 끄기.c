#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int sw[102] = { 0 };
    for(int i = 1; i <= n; ++i) scanf("%d", &sw[i]);

    int t; scanf("%d", &t);
    while(t--) {
        int mode, num; scanf("%d %d", &mode, &num);
        if(mode == 1) {
            for(int i = 1; num * i <= n; ++i) sw[num * i] = sw[num * i] ? 0 : 1;
        }
        else {
            sw[num] = sw[num] ? 0 : 1;
            for(int i = 1; num - i > 0 && num + i <= n && sw[num + i] == sw[num - i]; ++i) {
                sw[num - i] = sw[num - i] ? 0 : 1;
                sw[num + i] = sw[num + i] ? 0 : 1;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        if(i != 1 && (i - 1) % 20 == 0) printf("\n");
        printf("%d ", sw[i]);
    }

    return 0;
}