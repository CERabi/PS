#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    long long dap = 1;
    for(long long i = 1; i <= n; ++i) dap *= i;

    printf("%lld", dap);

    return 0;
}