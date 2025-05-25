#include <stdio.h>

int main(void) {
    int cur = 0, max = 0;
    for(int i = 0; i < 4; ++i) {
        int p, m; scanf("%d %d", &m, &p);
        cur = cur - m + p;
        if(cur > max) max = cur;
    }
    
    printf("%d", max);
    
    return 0;
}