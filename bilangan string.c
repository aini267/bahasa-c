#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
char *inttostr (long long n){
int digits = 20 + 1;
char *result = malloc(digits);
snprintf (result, digits, "%lld", n);
return result;
}
int main()
{
printf("Hasil konversi : %s\n", inttostr(CHAR_MIN));
printf ("Lebar strinng: %ld\n\n", strlen(inttostr (CHAR_MIN)));
printf ("Hasil konversi : %s\n", inttostr (INT_MAX));
printf ("Lebar string: %ld\n\n", strlen (inttostr (INT_MAX)));
printf ("Hasil konversi: %s\n", inttostr (LLONG_MAX));
printf ("Lebar string: %ld\n", strlen (inttostr (LLONG_MAX)));
return 0;
}