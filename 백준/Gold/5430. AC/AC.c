#include <stdio.h>
#include <string.h>

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        char comm[100005], query[700005]; int n;
        scanf("%s %d %s", comm, &n, query);

        int ptrq = 1, ptrd = 1;
        int dap[100005] = { 0 };

        int tmp = 0;
        while(query[ptrq] != ']') {
            if(query[ptrq] == ',') {
                dap[ptrd++] = tmp;
                tmp = 0;
            }
            else {
                tmp = tmp * 10 + (query[ptrq] - '0');
            }
            ++ptrq;
        }
        dap[ptrd] = tmp;

        int len = strlen(comm), ptrl = 1, ptrr = n, is_rev = -1;
        for(int i = 0; i < len; ++i) {
            if(comm[i] == 'R') is_rev *= - 1;
            else if(comm[i] == 'D') {
                if(is_rev == -1) {
                    ++ptrl;
                }
                else if(is_rev == 1) {
                    --ptrr;
                }
            }
        }

        if(ptrl - 1 > ptrr) {
            printf("error\n");
        }
        else if(ptrl - 1 == ptrr) {
            printf("[]\n");
        }
        else {
            if(is_rev == -1) {
                printf("[%d", dap[ptrl++]);
                for(; ptrl <= ptrr; ++ptrl) {
                    printf(",%d", dap[ptrl]);
                }
                printf("]\n");
            }
            else {
                printf("[%d", dap[ptrr--]);
                for(; ptrl <= ptrr; --ptrr) {
                    printf(",%d", dap[ptrr]);
                }
                printf("]\n");
            }
        }
    }

    return 0;
}