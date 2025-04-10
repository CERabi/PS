#include <stdio.h>
#include <string.h>

int main(void) {
    char str[55]; scanf("%s", str);

    int len = strlen(str), dap = 10;
    char prev = str[0];

    for(int i = 1; i < len; ++i) {
        if(prev == str[i]) dap += 5;
        else dap += 10;
        prev = str[i];
    }
    printf("%d", dap);

    return 0;
}