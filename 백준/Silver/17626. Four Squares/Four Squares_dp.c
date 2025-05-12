#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int hap[50001] = { 0 };

    for(int i = 1; i <= 223; ++i) hap[i * i] = 1;
    for(int i = 1; i <= 223; ++i) {
        for(int j = i; j <= 223; ++j) {
            if(i * i + j * j > 50000 || hap[i * i + j * j] != 0) continue;
            hap[i * i + j * j] = hap[i * i] + hap[j * j];
        }
    }
    for(int i = 1; i <= 223; ++i) {
        for(int j = i; j <= 223; ++j) {
            for(int k = j; k <= 223; ++k) {
                if(i * i + j * j + k * k > 50000 || hap[i * i + j * j + k * k] != 0) continue;
                hap[i * i + j * j + k * k] = hap[i * i] + hap[j * j] + hap[k * k];
            }
        }
    }

    if(hap[n] != 0) printf("%d", hap[n]);
    else printf("4", hap[n]);

    return 0;
}
