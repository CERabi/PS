#include <stdio.h>
#include <stdlib.h>

typedef struct _time {
    int st, ed;
} time;

time t[100001];

int cmp(const void* t1, const void* t2) {
    if((*(time*)t1).ed == (*(time*)t2).ed) {
        return (*(time*)t1).st - (*(time*)t2).st;
    }
    return (*(time*)t1).ed - (*(time*)t2).ed;
}

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d %d", &t[i].st, &t[i].ed);

    qsort(t, n, sizeof(time), cmp);

    int cnt = 0, now = 0;
    for(int ptr = 0; ptr < n; ++ptr) {
        if(t[ptr].st >= now) {
            now = t[ptr].ed;
            ++cnt;
        }
    }

    printf("%d", cnt);

    return 0;
}