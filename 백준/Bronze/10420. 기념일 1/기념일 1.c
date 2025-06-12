#include <stdio.h>

int month(int y, int n) {
    int m[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if(n == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))) return m[n] + 1;
    else return m[n];
}

int main(void) {
    int y = 2014, m = 4, d = 1;
    int n; scanf("%d", &n); d += n;

    while(d > month(y, m)) {
        d -= month(y, m); ++m;
        if(m > 12) {
            m -= 12;
            ++y;
        }
    }

    printf("%04d-%02d-%02d", y, m, d);

    return 0;
}