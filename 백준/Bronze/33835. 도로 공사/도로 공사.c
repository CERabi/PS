#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    double x1, y1, x2, y2; scanf("%d %lf %lf", &n, &x1, &y1);
    for(int i = 0; i < n - 1; ++i) {
        scanf("%lf %lf", &x2, &y2);
    }

    printf("%lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

    return 0;
}