#include <stdio.h>

int main() {
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = limit; i > 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}