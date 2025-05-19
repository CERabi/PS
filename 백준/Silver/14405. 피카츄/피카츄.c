#include <stdio.h>
#include <string.h>

int main(void) {
    char str[5005];
    scanf("%s", str);

    int ptr, len = strlen(str), dap = 0;
    while(ptr < len) {
        if(str[ptr] == 'p' && str[ptr + 1] == 'i') ptr += 2;
        else if(str[ptr] == 'k' && str[ptr + 1] == 'a') ptr += 2;
        else if(str[ptr] == 'c' && str[ptr + 1] == 'h' && str[ptr + 2] == 'u') ptr += 3;
        else {
            dap++;
            break;
        }
    }

    if(dap == 0) printf("YES");
    else printf("NO");

    return 0;
}