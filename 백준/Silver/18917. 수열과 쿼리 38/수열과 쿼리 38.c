#include <stdio.h>

int main(void) {
    int m; scanf("%d", &m);

    long long arr_hap = 0, arr_xor = 0;
    while(m--) {
        int comm; scanf("%d", &comm);
        if(comm == 3) printf("%lld\n", arr_hap);
        else if(comm == 4) printf("%lld\n", arr_xor);
        else if(comm == 1 || comm == 2) {
            long long x; scanf("%lld", &x);
            if(comm == 1) {
                arr_hap += x;
                arr_xor ^= x;
            }
            else if(comm == 2) {
                arr_hap -= x;
                arr_xor ^= x;
            }
        }
    }

    return 0;
}