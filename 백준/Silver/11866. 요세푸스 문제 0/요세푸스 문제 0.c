#include <stdio.h>

int main(void) {
    int n, k; scanf("%d %d", &n, &k);

    int num[1001] = { 0 }, ptr = k; num[k] = 1; printf("<%d", k);
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < k; ++j) {
            do {
                ptr = ptr % n + 1;
            } while(num[ptr]);
        }
        num[ptr] = 1;
        printf(", %d", ptr);
    }
    printf(">");

    return 0;
}
