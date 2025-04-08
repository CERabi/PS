#include <stdio.h>
#include <string.h>

int main(void) {
    int n; scanf("%d", &n);
    while(n--) {
        char str[51]; int ptr = 0;
        scanf("%s", str); int len = strlen(str);
        for(int i = 0; i < len; ++i) {
            if(str[i] == '(') ++ptr;
            if(str[i] == ')') {
                if(ptr <= 0) {
                    ptr = -1;
                    break;
                }
                else --ptr;
            }
        }
        if(ptr == 0) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}
