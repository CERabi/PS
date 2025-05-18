#include <stdio.h>
#include <stdlib.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}

int main(void) {
    int n; scanf("%d", &n);
    int stu[100001];
    for(int i = 0; i < n; ++i) scanf("%d", &stu[i]);

    qsort(stu, n, sizeof(int), cmp);

    int min = stu[0] + stu[n - 1];
    for(int i = 1; i < n / 2; ++i) {
        if(min > stu[i] + stu[n - i - 1]) min = stu[i] + stu[n - i - 1];
    }
    printf("%d", min);

    return 0;
}