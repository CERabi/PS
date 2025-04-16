#include <stdio.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n2 - *(int*)n1;
}

int main(void) {
    int n, k; scanf("%d %d", &n, &k);
    int coin[10] = { 0 };
    for(int i = 0; i < n; ++i) scanf("%d", &coin[i]);
    qsort(coin, n, sizeof(int), cmp);

    int ptr = 0, dap = 0;
    while(k > 0) {
        dap += k / coin[ptr];
        k %= coin[ptr];
        ++ptr;
    }

    printf("%d", dap);

    return 0;
}