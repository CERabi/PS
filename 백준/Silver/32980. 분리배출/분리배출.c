#include <stdio.h>
#include <string.h>

int flg[10005] = { 0 }; char str[10005][1005];

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
         scanf("%s", str[i]);
        int len = strlen(str[i]);
        for(int j = 0; j < len; ++j) {
            if(str[i][j] != str[i][0] || str[i][0] == 'O') {
                ++flg[i];
                break;
            }
        }
    }
    long long cost[27] = { 0 };
    scanf("%lld %lld %lld %lld %lld %lld %lld", &cost['P' - 'A'], &cost['C' - 'A'], &cost['V' - 'A']
          , &cost['S' - 'A'], &cost['G' - 'A'], &cost['F' - 'A'], &cost['O' - 'A']);

    long long hap = 0;
    for(int i = 0; i < n; ++i) {
        if(flg[i] || cost['O' - 'A'] < cost[str[i][0] - 'A']) {
            hap += cost['O' - 'A'] * strlen(str[i]);
        }
        else hap += cost[str[i][0] - 'A'] * strlen(str[i]);
    }

    printf("%lld", hap);

    return 0;
}