#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int tree[11] = { 0 }, mult[11][11] = { 0 };
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &tree[i]);
        mult[i][i] = tree[i];
    }

    for(int i = 1; i <= n - 1; ++i) {
        for(int j = i + 1; j <= n; ++j) {
            mult[i][j] = mult[i][j - 1] * tree[j];
        }
    }

    int max = 0;
    for(int n1 = 1; n1 <= n - 3; ++n1) {
        for(int n2 = n1 + 1; n2 <= n - 2; ++n2) {
            for(int n3 = n2 + 1; n3 <= n - 1; ++n3) {
                int here = mult[1][n1] + mult[n1 + 1][n2] + mult[n2 + 1][n3] + mult[n3 + 1][n];
                max = (max > here) ? max : here;
            }
        }
    }

    printf("%d", max);

    return 0;
}