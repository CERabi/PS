#include <stdio.h>
#include <string.h>

int main(void) {
    while(1) {
        char stack[105], str[105], str1[10]; int ptr = 0;
        gets(str); int len = strlen(str);
        if(!strcmp(".", str)) break;
        for(int i = 0; i < len; ++i) {
            if(str[i] == '(' || str[i] == '[') stack[ptr++] = str[i];
            if(str[i] == ')' || str[i] == ']') {
                if(ptr == 0) {
                    --ptr; break;
                }
                if((stack[ptr - 1] == '(' && str[i] == ')') || (stack[ptr - 1] == '[' && str[i] == ']')) {
                    --ptr;
                }
                else break;
            }
        }
        if(ptr == 0) printf("yes\n");
        else printf("no\n");
    }

	return 0;
}
