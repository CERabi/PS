#include <stdio.h>
#include <string.h>

int main(void) {
    int n, queue[10005] = { 0 }, f = 0, r = 0; scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        char str[10]; scanf("%s", str);
        if(!strcmp(str, "push")) {
            int tmp; scanf("%d", &tmp);
            queue[r++] = tmp;
        }
        if(!strcmp(str, "pop")) {
            if(f == r) printf("-1\n");
            else printf("%d\n", queue[f++]);
        }
        if(!strcmp(str, "size")) {
            printf("%d\n", r - f);
        }
        if(!strcmp(str, "empty")) {
            if(f == r) printf("1\n");
            else printf("0\n");
        }
        if(!strcmp(str, "front")) {
            if(f == r) printf("-1\n");
            else printf("%d\n", queue[f]);
        }
        if(!strcmp(str, "back")) {
            if(f == r) printf("-1\n");
            else printf("%d\n", queue[r - 1]);
        }
    }

    return 0;
}