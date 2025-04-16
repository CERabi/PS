#include <stdio.h>
#include <stdlib.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}

int main(void) {
    int n; scanf("%d", &n);
    int time[1005];
    for(int i = 0; i < n; ++i) scanf("%d", &time[i]);
    qsort(time, n, sizeof(int), cmp);

    int hap = 0;
    for(int i = 0; i < n; ++i) {
        hap += (n - i) * time[i];
    }

    printf("%d", hap);

    return 0;
}