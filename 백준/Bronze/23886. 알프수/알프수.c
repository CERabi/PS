#include <stdio.h>
#include <string.h>

int main(void) {
    char str[2000000]; scanf("%s", str);
    int len = strlen(str), flg = 0;
    for(int i = 2; i < len; ++i) {
        int now = str[i] - str[i - 1], prev = str[i - 1] - str[i - 2];
        if(now * prev > 0 && now != prev) {
            flg = 1; break;
        }
        if(now == 0 || prev == 0) {
            flg = 1; break;
        }
    }

    if(str[1] - str[0] < 0 || str[len - 1] - str[len - 2] > 0) flg = 1;

    if(flg) printf("NON ALPSOO");
    else printf("ALPSOO");

    return 0;
}