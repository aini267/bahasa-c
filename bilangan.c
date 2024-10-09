#include <stdio.h>
int main() {
    int decimalNumber;

    printf("Masukkan bilangan decimal: ");

      scanf("%d", &decimalNumber);

         printf("Bilangan dalam format heksadesimal (huruf kecil): %x\n",decimalNumber);

      printf("Bilangan dalam format heksadesimal (huruf besar): %x\n",decimalNumber);

    return 0;
}