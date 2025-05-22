#include <stdio.h>

int main(void) {
    int q; scanf("%d", &q);
    for(int i = 0; i < q; ++i) {
        int query; scanf("%d", &query);
        if(query == 2) printf("\n");
    }
    return 0;
}