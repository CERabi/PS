#include <stdio.h>

int main(void) {
    int t; scanf("%d", &t);
    while(t--) {
        int y = 0, k = 0;
        for(int i = 0; i < 9; ++i) {
            int n, m; scanf("%d %d", &n, &m);
            y += n; k += m;
        }
        if(y < k) printf("Korea\n");
        else if(y > k) printf("Yonsei\n");
        else printf("Draw\n");
    }

    return 0;
}