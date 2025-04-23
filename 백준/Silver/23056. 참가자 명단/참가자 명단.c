#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* s1, const void* s2) {
    if(strlen((char*)s1) == strlen((char*)s2)) {
        return strcmp((char*)s1, (char*)s2);
    }
    return strlen((char*)s1) - strlen((char*)s2);
}
int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    char name_list[11][11][20];
    int list_cnt[11] = { 0 };
    while(1) {
        int team; char str[20]; scanf("%d %s", &team, str);
        if(team == 0 && !strcmp(str, "0")) break;
        if(list_cnt[team] < m) {
            strcpy(name_list[team][list_cnt[team]], str);
            ++list_cnt[team];
        }
    }

    for(int i = 1; i <= n; ++i) qsort(name_list[i], list_cnt[i], sizeof(name_list[i][0]), cmp);

    for(int i = 1; i <= n; i += 2) {
        for(int j = 0; j < list_cnt[i]; ++j) printf("%d %s\n", i, name_list[i][j]);
    }
    for(int i = 2; i <= n; i += 2) {
        for(int j = 0; j < list_cnt[i]; ++j) printf("%d %s\n", i, name_list[i][j]);
    }

    return 0;
}