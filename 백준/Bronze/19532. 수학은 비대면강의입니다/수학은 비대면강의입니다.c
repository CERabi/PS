#include <stdio.h>

int main(void) {
    int n[6] = { 0 }; for(int i = 0; i < 6; ++i) scanf("%d", &n[i]);
    int tmp1 = n[0], tmp2 = n[3];

    int x, y;
    if(n[3] == 0) {
        y = n[5] / n[4];
        x = (n[2] - n[1] * y) / n[0];
    }
    else if(n[0] == 0) {
        y = n[2] / n[1];
        x = (n[5] - n[4] * y) / n[3];
    }
    else {
        for(int i = 0; i < 3; ++i) {
            n[i] *= tmp2;
            n[i + 3] *= tmp1;
        }
        y = (n[2] - n[5]) / (n[1] - n[4]);
        x = (n[5] - n[4] * y) / n[3];
    }

    printf("%d %d", x, y);

    return 0;
}