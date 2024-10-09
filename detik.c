#include <stdio.h>
#include <time.h>
void printtime (struct tm t){
printf ("%d/%d/%d %d:%d:%d\n",
t.tm_mday,
t.tm_mon + 1,
t.tm_year + 1900,
t.tm_hour,
t.tm_min,
t.tm_sec);
}
int main(){
time_t t1, t2;
struct tm tm1, tm2;
double seconds;
/* mengisi tanggal dan waktu pertama */
/* 14/03/2016 23:20:5 */
tm1.tm_mday = 14;
tm1.tm_mon = 2;
tm1.tm_year = 2016 - 1900;
tm1.tm_hour = 23;
tm1.tm_min = 20;
tm1.tm_sec = 5;
/* mengisi tanggal dan waktu kedua */
/* 15/03/2016 23:00:0 */
tm2.tm_mday = 15;
tm2.tm_mon = 2;
tm2.tm_year = 2016 - 1900;
tm2.tm_hour = 23;
tm2.tm_min = 0;
tm2.tm_sec = 0;
/* mengisi nilai ke variabel t1 dan t2 */
t1 = mktime (&tm1);
t2 = mktime (&tm2);
/* menghitung selisih detik */
seconds = difftime (t2, t1);
printf("Waktu Pertama : ");
printtime (tm1);
printf ("Waktu Kedua : ");
printtime (tm2);
printf ("Selisih: %lf detik\n", seconds);
return 0;
}