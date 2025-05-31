#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 0; i < 9; ++i) {
        int tmp; scanf("%d", &tmp);
        n -= tmp;
    }
    
    printf("%d", n);
}