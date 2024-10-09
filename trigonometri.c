#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433827
double degreetoradian (double deg){
return (deg * PI) / 180;
}
int main() {
printf("sin (0) : %lf\n", sin(0));
printf("sin (30) : %lf\n", sin(degreetoradian (30)));
printf("sin (45) : %lf\n", sin(degreetoradian (45)));
printf("sin (60) : %lf\n", sin(degreetoradian (60)));
printf("sin (90) : %lf\n", sin(degreetoradian (90)));
printf("cos (0) : %lf\n", cos (0));
printf("cos (30) : %lf\n", cos(degreetoradian (30)));
printf("cos (45) : %lf\n", cos(degreetoradian (45)));
printf("cos (60) : %lf\n", cos(degreetoradian (60)));
printf("cos (90) : %lf\n", cos(degreetoradian (90)));
printf("tan (45) : %lf\n", tan(degreetoradian (45)));
return 0;
}