#include <stdio.h>
#include <stdlib.h>

int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}
int main(void) {
    int n; scanf("%d", &n);
    int num[500005] = { 0 }, chk[8005] = { 0 }, sum = 0, min = 4004, max = -4004, app = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
        sum += num[i];
        chk[num[i] + 4000]++;
        if(chk[app] < chk[num[i] + 4000]) app = num[i] + 4000;
        if(min > num[i]) min = num[i];
        if(max < num[i]) max = num[i];
    }
    int flg = 0;
    for(int tmp = 0; tmp < 8000; ++tmp) {
        if(chk[tmp] == chk[app]) {
            app = tmp;
            flg++;
        }
        if(flg == 2) break;
    }

    qsort(num, n, sizeof(int), cmp);

    printf("%d\n%d\n%d\n%d", (int)round((double)sum / n), num[n / 2], app - 4000, max - min);

    return 0;
}