#include <stdio.h>

int main(void) {
    int T; scanf("%d", &T);
    int n3 = T / 300;
    T %= 300;
    int n2 = T / 60;
    T %= 60;
    int n1 = T / 10;
    T %= 10;

    if(T != 0) printf("-1");
    else printf("%d %d %d", n3, n2, n1);

    return 0;
}