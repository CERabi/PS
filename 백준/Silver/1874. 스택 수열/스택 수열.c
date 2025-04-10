#include <stdio.h>

int main(void) {
    int stack[100005] = { 0 }, top = 0, i = 0, n, now = 1, ptr = 0; scanf("%d", &n);
    char dap[200005];

    for(; i < n; ++i) {
        int tmp; scanf("%d", &tmp);
        if(tmp == now) {
            dap[ptr++] = '+';
            dap[ptr++] = '-';
            ++now;
        }
        else if(tmp < now) {
            if(top < 0 || stack[top - 1] != tmp) break;
            else {
                --top;
                dap[ptr++] = '-';
            }
        }
        else {
            for(; now <= tmp; ++now) {
                dap[ptr++] = '+';
                stack[top++] = now;
            }
            --top;
            dap[ptr++] = '-';
        }
    }

    if(i == n) {
        for(int i = 0; i < ptr; ++i) printf("%c\n", dap[i]);
    }
    else printf("NO");

    return 0;
}