#include <stdio.h>
#include <string.h>

int main(void) {
    while(1) {
        char s[40]; scanf("%s", s);
        if(strcmp(s, "#") == 0) break;

        int len = strlen(s), cnt = 0; char par;
        for(int i = 0; i < len; ++i) {
            if(s[i] == '0' || s[i] == '1') cnt += s[i];
            else par = s[i];
        }

        for(int i = 0; i < len; ++i) {
            if(s[i] == '0' || s[i] == '1') printf("%c", s[i]);
            else {
                if(par == 'e') {
                    if(cnt % 2) printf("1");
                    else printf("0");
                }
                else {
                    if(cnt % 2) printf("0");
                    else printf("1");
                }
            }
        }
        printf("\n");
    }

    return 0;
}