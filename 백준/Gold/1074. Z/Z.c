#include <stdio.h>

int main(void) {
    int N, r, c; scanf("%d %d %d", &N, &r, &c);

    int big = r > c ? r : c, limit = 1;
    for(; limit * 2 <= big; limit *= 2);

    int dap = 0, tmpx = 0, tmpy = 0;
    while(limit >= 1) {
        if(r >= limit + tmpy && c >= limit + tmpx) {
            dap += limit * limit * 3;
            tmpx += limit; tmpy += limit;
        }
        else if(r >= limit + tmpy) {
            dap += limit * limit * 2;
            tmpy += limit;
        }
        else if(c >= limit + tmpx) {
            dap += limit * limit * 1;
            tmpx += limit;
        }

        limit /= 2;
    }

    printf("%d", dap);

    return 0;
}