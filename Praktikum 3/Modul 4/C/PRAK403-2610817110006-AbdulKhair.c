#include <stdio.h>

int main() {
    int first, second;
    scanf("%d %d", &first, &second);

    if (first < second) {
        for (int i = 0; i <= second - first; i++) {
            printf("%d %d", first + i, second - i);

            if (i < second - first) {
                printf(" - ");

            }
        }
    } else {
        for (int i = 0; i <= first - second; i++) {
            printf("%d %d", first - i, second + i);

            if(i < first - second) {
                printf(" - ");
            }
        }
    }
    return 0;
}