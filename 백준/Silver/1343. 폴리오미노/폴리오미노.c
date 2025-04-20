#include <stdio.h>
#include <string.h>

int main(void) {
    char str[55], dap[55]; scanf("%s", str);
    int len = strlen(str), ptr = 0, flg = 0;
    while(ptr < len) {
        if(len - ptr >= 3 && str[ptr] == 'X' && str[ptr + 1] == 'X' && str[ptr + 2] == 'X' && str[ptr + 3] == 'X') {
            for(int i = 0; i < 4; ++i) {
                dap[ptr++] = 'A';
            }
        }
        else if(len - ptr >= 1 && str[ptr] == 'X' && str[ptr + 1] == 'X') {
            for(int i = 0; i < 2; ++i) dap[ptr++] = 'B';
        }
        else if(str[ptr] == 'X') {
            flg = 1;
            break;
        }
        else {
            dap[ptr++] = '.';
        }
    }
    dap[ptr] = NULL;

    if(flg == 0) printf("%s", dap);
    else printf("-1");

    return 0;
}
