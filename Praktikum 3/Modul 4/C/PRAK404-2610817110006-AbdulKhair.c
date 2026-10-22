#include <stdio.h>

int main() {
    int choose = 0;
    float first, second, results;

    while(choose != 5) {
        printf("\nPilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan: ");
        scanf("%d", &choose);

        if(choose >= 1 && choose <= 4) {
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &first);

            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &second);

            if(choose == 1) {
                results = first + second;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", first, second, results);
            } else if(choose == 2) {
                results = first - second;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", first, second, results);
            } else if(choose == 3) {
                results = first * second;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", first, second, results);
            } else {
                if(second != 0) {
                    results = first / second;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", first, second, results);
                } else {
                    printf("Tidak dapat membagi dengan nol\n");
                }
            }
        } else if(choose == 5) {
            printf("Terimakasih, Telah Menggunakan Kalkulator Abdul Khair\n");
        } else {
            printf("Input Anda Salah, Coba Lagi\n");
        }
    }

    return 0;
}