#include <stdio.h>

int main(void) {
    int n, s; scanf("%d %d", &n, &s);
    int num[22] = { 0 };
    for(int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }

    int end = 2;
    for(int i = 1; i < n; ++i) end *= 2;

    int chk[22] = { 0 }, now = 0, cnt = 0;
    for(int i = 1; i < end; ++i) {
        ++chk[0]; now += num[0];
        int ptr = 0;
        while(1) {
            if(chk[ptr] <= 1) break;
            chk[ptr]-= 2;
            now -= 2 * num[ptr];
            ++chk[ptr + 1];
            now += num[ptr + 1];
            ++ptr;
        }

        if(s == now) ++cnt;
    }

    printf("%d", cnt);

    return 0;
}