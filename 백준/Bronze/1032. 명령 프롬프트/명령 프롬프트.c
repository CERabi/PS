#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char dap[51];

    scanf("%d %s", &n, dap);
    int len = strlen(dap);

    for(int i = 1; i < n; ++i) {
        char tmp[51];
        scanf("%s", tmp);

        for(int j = 0; j < len; ++j) {
            if(tmp[j] != dap[j]) {
                dap[j] = '?';
            }
        }
    }

    printf("%s", dap);

    return 0;
}