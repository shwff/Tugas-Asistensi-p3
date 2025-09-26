#include <stdio.h>
#include <stdlib.h>

int main()
{
    void decimalToBinary(int n) {
    int bin[32], i = 0;

    if (n == 0) {
        printf("0000");
        return;
    }

    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    // Tambah padding nol supaya kelipatan 4
    while (i % 4 != 0) {
        bin[i++] = 0;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
        if (j % 4 == 0 && j != 0) printf(" ");
    }
    printf(" \n\t\t\t");
    }

    int num;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &num);

    printf("Biner (kelompok 4 bit): ");
    decimalToBinary(num);

    printf("Bilangan %s", (num % 2 == 0) ? "genap" : "ganjil");

    return 0;
}

