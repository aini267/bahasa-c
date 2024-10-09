#include <stdio.h>
#include <stdlib.h>
int main() {
printf("Hasil konversi atoi (): %d\n", atoi ("12345"));
printf("Hasil konversi atol (): %ld\n", atol ("2147483647"));
printf("Hasil konversi atoll (): %lld\n", atoll ("9223372036854775807"));
printf("Hasil konversi atof (): %lf\n", atof ("12345.6789"));
return 0;
}