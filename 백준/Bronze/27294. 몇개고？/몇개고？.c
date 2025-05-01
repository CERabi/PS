#include <stdio.h>

int main(void) {
    int t, s; scanf("%d %d", &t, &s);
    if(s == 0 && (t >= 12 && t <= 16)) printf("320");
    else printf("280");
    
    return 0;
}