#include <stdio.h>

int main(void) {
    int k, stack[100001] = { 0 }, ptr = 0; scanf("%d", &k);
    for(int i = 0; i < k; ++i) {
        int tmp; scanf("%d", &tmp);
        if(tmp != 0) stack[ptr++] = tmp;
        else --ptr;
    }

    int sum = 0;
    for(int i = 0; i < ptr; ++i) sum += stack[i];

    printf("%d", sum);

    return 0;
}