#include <stdio.h>
#include <math.h>


int main(void) {
    int n; scanf("%d", &n);
    long long bank[20000] = { 0 }; long long all = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%lld", &bank[i]);
        bank[i + n] = bank[i];
        all += bank[i];
    }

    for(int i = 1; i < 2 * n; ++i) bank[i] += bank[i - 1];

    long long cnt = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            long long sub = bank[j + i] - bank[j];
            if(sub < 0) cnt += (long long)ceil(((double)sub * -1.0) / all);
        }
    }

    printf("%lld", cnt);

	return 0;
}
