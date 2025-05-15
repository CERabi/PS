#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1700]; scanf("%[^\n]s", str);
    int len = strlen(str), ph = 0, pg = 0;
    for(int i = 0; i < len; ++i) {
        if(str[i] == 'A' || str[i] == 'H' || str[i] == 'P' || str[i] == 'Y') ++ph;
        if(str[i] == 'S' || str[i] == 'A' || str[i] == 'D') ++pg;
    }
    if(pg == 0 && ph == 0) printf("50.00");
    else {
        int dap = 100 * 1000 * ph / (ph + pg);
        if(dap % 10 >= 5) dap = dap / 10 + 1;
        else dap /= 10;
        printf("%d.%02d", dap / 100, dap % 100);
    }

    return 0;
}
