#include <stdio.h>

int main() {
    int n, multiple;
    int total, total_all = 0;

    scanf("%d", &n);
    scanf("%d", &multiple);

    for (int i = 1; i <= n; i++) {
        total = 0;

        for (int j = i; j >= 1; j--) {
            total = total + j * multiple;

            printf("(%d * %d)", j, multiple);

            if (j > 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", total);
        total_all = total_all + total;
    }

    printf("%d\n", total_all);

    return 0;
}