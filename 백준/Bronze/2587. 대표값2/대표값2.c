#include <stdio.h>
#include <stdlib.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}

int main(void) {
    int num[5] = { 0 }, sum = 0;
    for(int i = 0; i < 5; ++i) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    qsort(num, 5, sizeof(int), cmp);

    printf("%d\n%d", sum / 5, num[2]);

    return 0;
}