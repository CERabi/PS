#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    int dap = 0;
    for(int i = 0; i < n; ++i) {
        int stu, ap; scanf("%d %d", &stu, &ap);
        dap += ap % stu;
    }

    printf("%d", dap);

    return 0;
}
