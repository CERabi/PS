#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200]; scanf("%s", s);
    int alpha[35] = { 0 }, len = strlen(s);

    for(int i = 0; i < len; ++i) ++alpha[s[i] - 'a'];

    for(int i = 0; i <= 'z' - 'a'; ++i) printf("%d ", alpha[i]);

    return 0;
}