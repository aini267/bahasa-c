#include <stdio.h>
int main () {
double a = 123.456789;
double b = 12345.6789;
printf ("%16.101f\n",a);
printf ("%16.61f\n",a);
printf ("%16.21f\n",a);
printf ("%16.101f\n",b);
printf ("%16.61f\n",b);
printf ("%16.21f\n",a);
return 0;
}
