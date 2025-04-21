#include <stdio.h>
#include <string.h>

char next_cons(char c) {
    if(c == 'z') return 'z';
    ++c;
    while(c < 'z') {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            break;
        }
        c++;
    }
    return c;
}

char near_vowel(char c) {
    char c_up = c + 1, c_down = c - 1;
    while(1) {
        if(c_down >= 'a') {
            if(c_down == 'a' || c_down == 'e' || c_down == 'i' || c_down == 'o' || c_down == 'u') {
                return c_down;
            }
            --c_down;
        }
        if(c_up < 'z') {
            if(c_up == 'a' || c_up == 'e' || c_up == 'i' || c_up == 'o' || c_up == 'u') {
                return c_up;
            }
            ++c_up;
        }
    }
}

int main(void) {
    char str[100], dap[100]; scanf("%s", str);
    int ptrs = 0, ptrd = 0, len = strlen(str);
    while(ptrs < len) {
        if(str[ptrs] == 'a' || str[ptrs] == 'e' || str[ptrs] == 'i' || str[ptrs] == 'o' || str[ptrs] == 'u') {
            dap[ptrd++] = str[ptrs];
        }
        else {
            dap[ptrd++] = str[ptrs];
            dap[ptrd++] = near_vowel(str[ptrs]);
            dap[ptrd++] = next_cons(str[ptrs]);
        }
        ++ptrs;
    }
    dap[ptrd] = NULL;

    printf("%s", dap);

    return 0;
}
