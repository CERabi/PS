#include <stdio.h>

int min(int n1, int n2, int n3) {
    return n3 < (n1 < n2 ? n1 : n2) ? n3 : (n1 < n2 ? n1 : n2);
}

int main(void) {
    int n; scanf("%d", &n);
    int ramen[10004] = { 0 };
    for(int i = 0; i < n; ++i) scanf("%d", &ramen[i]);

    int cost = 0;
    for(int i = 0; i < n; ++i) {
        if(ramen[i + 1] > ramen[i + 2]) {
            // 2개 먼저 처리
            if(ramen[i] < ramen[i + 1] - ramen[i + 2]) {
                cost += ramen[i] * 5;
                ramen[i + 1] -= ramen[i];
                ramen[i] -= ramen[i];
            }
            else {
                cost += (ramen[i + 1] - ramen[i + 2]) * 5;
                ramen[i] -= ramen[i + 1] - ramen[i + 2];
                ramen[i + 1] -= ramen[i + 1] - ramen[i + 2];
            }
            // 3개 처리
            int m = min(ramen[i], ramen[i + 1], ramen[i + 2]);
            cost += m * 7;
            ramen[i] -= m; ramen[i + 1] -= m; ramen[i + 2] -= m;
            // 1개 처리
            cost += ramen[i] * 3; ramen[i] = 0;
        }
        else {
            // 3개 처리
            int m = min(ramen[i], ramen[i + 1], ramen[i + 2]);
            cost += m * 7;
            ramen[i] -= m; ramen[i + 1] -= m; ramen[i + 2] -= m;
            // 2개 처리
            if(ramen[i] < ramen[i + 1]) {
                cost += ramen[i] * 5;
                ramen[i + 1] -= ramen[i];
                ramen[i] -= ramen[i];
            }
            else {
                cost += ramen[i + 1] * 5;
                ramen[i] -= ramen[i + 1];
                ramen[i + 1] -= ramen[i + 1];
            }
            // 1개 처리
            cost += ramen[i] * 3; ramen[i] = 0;
        }
    }

    printf("%d", cost);

	return 0;
}
