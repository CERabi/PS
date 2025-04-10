#include <stdio.h>

int main(void) {
    int k, n; scanf("%d %d", &k, &n);
    long long dap_l = 1, dap_r = 1, dap, lan[10005] = { 0 };

    for(int i = 0; i < k; ++i) {
        scanf("%lld", &lan[i]);
        if(lan[i] > dap_r) dap_r = lan[i];
    }

    while(dap_l <= dap_r) {
        long long sum = 0, tmp = (dap_l + dap_r) / 2;
        for(int i = 0; i < k; ++i) {
            sum += lan[i] / tmp;
        }
        if(sum >= n) {
            dap = tmp;
            dap_l = tmp + 1;
        }
        else dap_r = tmp - 1;
    }
    printf("%d", dap);

    return 0;
}