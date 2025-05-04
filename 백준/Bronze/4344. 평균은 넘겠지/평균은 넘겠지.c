#include <stdio.h>

int main(void) {
    int c; scanf("%d", &c);
    while(c--) {
        int n; scanf("%d", &n);
        int stu[1005] = { 0 }, sum = 0;
        for(int i = 0; i < n; ++i) {
            scanf("%d", &stu[i]); sum += stu[i];
        }
        double mid = sum / n; int cnt = 0;
        for(int i = 0; i < n; ++i) {
            if(mid < (double)stu[i]) ++cnt;
        }
        printf("%0.3lf%%\n", (double)cnt / (double)n * 100);
    }

    return 0;
}
