#include <stdio.h>

double num[10001];

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%lf", &num[i]);
    }

    double max = 0.0f;
    for(int i = 1; i <= n; ++i) {
        double mult = 1;
        for(int j = i; j <= n; ++j) {
            mult *= num[j];
            max = (max > mult) ? max : mult;
        }
    }

    printf("%.3lf", max);

    return 0;
}