#include "stdio.h"

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int n = a % 10;
        for(int i = 1; i < b; ++i) {
            n = (n * a) % 10;
        }
        
        printf("%d\n", n == 0 ? 10 : n);
    }
    
    return 0;
}