#include <stdio.h>

int main(void) {
    int T; scanf("%d", &T);
    while(T--) {
        long long tmp, n; scanf("%lld", &n);
        while(1) {
            int sum = 0; tmp = n;
            while(tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            if(sum % 2) break;
            n *= 2;
        }
        printf("%lld\n", n);
    }
    return 0;
}
