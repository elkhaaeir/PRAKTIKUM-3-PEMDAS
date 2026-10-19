#include <stdio.h>

int hanoi(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 2 * hanoi(n -1) + 1;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printf("Jumlah langkah minimun untuk %d cakram adalah %d\n", n, hanoi(n));
    
    return 0;
}