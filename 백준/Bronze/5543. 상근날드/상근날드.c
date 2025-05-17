#include <stdio.h>

int main(void) {
    int dap = -50, min = 2000;
    for(int i = 0; i < 3; ++i) {
        int p; scanf("%d", &p);
        if(min > p) min = p;
    }
    dap += min; min = 2000;
    
    for(int i = 0; i < 2; ++i) {
        int p; scanf("%d", &p);
        if(min > p) min = p;
    }
    dap += min;
    
    printf("%d", dap);
    
    return 0;
}