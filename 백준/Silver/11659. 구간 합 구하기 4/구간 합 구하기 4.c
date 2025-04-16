#include <stdio.h>

int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    int sum_num[100001] = { 0 };
    for(int i = 1; i <= n; ++i) {
        int tmp; scanf("%d", &tmp);
        sum_num[i] = sum_num[i - 1] + tmp;
    }

    while(m--) {
        int st, ed; scanf("%d %d", &st, &ed);
        printf("%d\n", sum_num[ed] - sum_num[st - 1]);
    }

    return 0;
}