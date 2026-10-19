#include <stdio.h>

int digit_value(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + digit_value(n / 10);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printf("Jumlah digit dari %d adalah %d\n", n, digit_value(n));

    return 0;
}