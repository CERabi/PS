#include <stdio.h>

int main(void) {
    int l; scanf("%d", &l);
    printf("%d", l / 5 + (l % 5 ? 1 : 0));

    return 0;
}