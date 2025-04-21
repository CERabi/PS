// 9333
#include <stdio.h>
#include <string.h>

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        char s[3][10]; scanf("%s %s %s", s[0], s[1], s[2]);
        long long nums[3] = { 0, 0, 0 };
        for(int i = 0; i < 3; ++i) {
            int len = strlen(s[i]);
            for(int j = 0; j < len; ++j) {
                if(j == strlen(s[i]) - 3) continue;
                nums[i] = nums[i] * 10 + (s[i][j] - '0');
            }
            nums[i] *= 10;
        }
        //printf("%lld %lld %lld\n", nums[0], nums[1], nums[2]);

        int i = 0;
        for(; nums[1] > 0 && i <= 1200; ++i) {
            //printf("%lld ", nums[1] * nums[0] / 100000);
            nums[1] += (nums[1] * nums[0] / 100000 + 5) / 10 * 10;
            nums[1] -= nums[2];
            //printf("%lld %lld %lld\n", nums[0], nums[1], nums[2]);
        }

        if(i == 1201) printf("impossible\n");
        else printf("%d\n", i);
    }

    return 0;
}
