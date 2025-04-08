#include <stdio.h>

int book[10] = { 0 };
void add(int n, int mul) {
    while(n > 0) {
        book[n % 10] += mul;
        n /= 10;
    }
}

int main(void) {
    int st = 1, n, mul = 1; scanf("%d", &n);

    while(st <= n) {
        // 0 ~ 9로 맞춰서 계산 (0 ~ 9가 자릿수 * (n / 10 - st / 10 + 1)만큼 나오게 된다)
        // 작은쪽 끝자리 0으로 맞추기
        while(st % 10 != 0 && st <= n) {
            add(st, mul); ++st;
        }
        if(st > n) break;
        // 끝자리 9로 맞추기
        while(n % 10 != 9 && st <= n) {
            add(n, mul); --n;
        }
        // 자릿수 계산
        int tmp = (n / 10 - st / 10 + 1);
        for(int i = 0; i < 10; ++i) {
            book[i] += mul * tmp;
        }
        // 자릿수 이동
        mul *= 10; st /= 10; n /= 10;
    }

    for(int i = 0; i < 10; ++i) printf("%d ", book[i]);

	return 0;
}
