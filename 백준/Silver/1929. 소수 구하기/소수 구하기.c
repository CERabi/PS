#include <stdio.h>

int sosu[1000005] = { 0 };
int main(void) {
    int m, n; scanf("%d %d", &m, &n);
    for(int i = 2; i < n; ++i) {
        if(sosu[i] == 1) continue;
        for(int j = 2; i * j <= n; ++j) {
            sosu[i * j] = 1;
        }
    }

    sosu[1] = 1;
    for(; m <= n; ++m) {
        if(!sosu[m]) printf("%d\n", m);
    }

    return 0;
}