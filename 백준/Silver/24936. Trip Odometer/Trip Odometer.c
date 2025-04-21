#include <stdio.h>
#include <stdlib.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}

int main(void) {
    int n; scanf("%d", &n);
    int dist[100001] = { 0 }, sum = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &dist[i]);
        sum += dist[i];
    }

    int dap[100001] = { 0 }, cnt = 0;
    for(int i = 0; i < n; ++i) {
        int j = 0;
        for(; j < cnt; ++j) {
            if(dap[j] == sum - dist[i]) break;
        }
        if(j == cnt) dap[cnt++] = sum - dist[i];
    }

    qsort(dap, cnt, sizeof(int), cmp);
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; ++i) printf("%d ", dap[i]);

    return 0;
}