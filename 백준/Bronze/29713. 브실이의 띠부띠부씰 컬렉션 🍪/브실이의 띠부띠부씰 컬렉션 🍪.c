#include <stdio.h>

int main(void) {
    int n; char dd[1005]; scanf("%d %s", &n, dd);
    int alpha[33] = { 0 };
    for(int i = 0; i < n; ++i) {
        ++alpha[dd[i] - 'A'];
    }
    int check1[8] = { 'B', 'O', 'N', 'Z', 'S', 'I', 'L', 'V' }, check2[2] = { 'R', 'E' };
    int min = 1000;
    for(int i = 0; i < 8; ++i) {
        if(alpha[(check1[i] - 'A')] < min) min = alpha[check1[i] - 'A'];
        if(i < 2 && alpha[(check2[i] - 'A')] / 2 < min) min = alpha[check2[i] - 'A'] / 2;
    }

    printf("%d", min);

    return 0;
}