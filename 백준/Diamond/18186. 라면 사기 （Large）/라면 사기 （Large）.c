#include <stdio.h>

int min(int n1, int n2, int n3) {
    return n3 < (n1 < n2 ? n1 : n2) ? n3 : (n1 < n2 ? n1 : n2);
}

int main(void) {
    int n; long long b, c; scanf("%d %lld %lld", &n, &b, &c);
    long long ramen[1000001] = { 0 };
    for(int i = 0; i < n; ++i) scanf("%lld", &ramen[i]);

    long long cost = 0;
    long long c_2 = b + c, c_3 = b + 2 * c;
    if(b > c) {
        for(int i = 0; i < n; ++i) {
            if(ramen[i + 1] > ramen[i + 2]) {
                // 2개 먼저 처리
                if(ramen[i] < ramen[i + 1] - ramen[i + 2]) {
                    cost += ramen[i] * c_2;
                    ramen[i + 1] -= ramen[i];
                    ramen[i] -= ramen[i];
                }
                else {
                    cost += (ramen[i + 1] - ramen[i + 2]) * c_2;
                    ramen[i] -= ramen[i + 1] - ramen[i + 2];
                    ramen[i + 1] -= ramen[i + 1] - ramen[i + 2];
                }
                // 3개 처리
                int m = min(ramen[i], ramen[i + 1], ramen[i + 2]);
                cost += m * c_3;
                ramen[i] -= m; ramen[i + 1] -= m; ramen[i + 2] -= m;
                // 1개 처리
                cost += ramen[i] * b; ramen[i] = 0;
            }
            else {
                // 3개 처리
                int m = min(ramen[i], ramen[i + 1], ramen[i + 2]);
                cost += m * c_3;
                ramen[i] -= m; ramen[i + 1] -= m; ramen[i + 2] -= m;
                // 2개 처리
                if(ramen[i] < ramen[i + 1]) {
                    cost += ramen[i] * c_2;
                    ramen[i + 1] -= ramen[i];
                    ramen[i] -= ramen[i];
                }
                else {
                    cost += ramen[i + 1] * c_2;
                    ramen[i] -= ramen[i + 1];
                    ramen[i + 1] -= ramen[i + 1];
                }
                // 1개 처리
                cost += ramen[i] * b; ramen[i] = 0;
            }
        }
    }
    else {
        for(int i = 0; i < n; ++i) cost += ramen[i] * b;
    }

    printf("%lld", cost);

	return 0;
}
