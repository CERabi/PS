#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void* n1,const void* n2) {
    return *(int*)n1 - *(int*)n2;
}

int main(void) {
    int n; scanf("%d", &n);
    if(n == 0) {
        printf("0");

        return 0;
    }
    int score[300001] = { 0 };
    for(int i = 0; i < n; ++i) scanf("%d", &score[i]);
    qsort(score, n, sizeof(int), cmp);
    int ignore = (int)round(15.0 / 100.0 * (double)n);

    int sum = 0;
    for(int i = ignore; i < n - ignore; ++i) sum += score[i];

    sum = (int)round((double)sum / (double)(n - 2 * ignore));

    printf("%d", sum);

    return 0;
}