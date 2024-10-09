#include <stdio.h>
#include <time.h>

const char * const HARI[7] = {
    "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"
};

const char * const BULAN[12] = {
    "Januari", "Februari", "Maret", "April", "Mei", "Juni", 
    "Juli", "Agustus", "September", "Oktober", "November", "Desember"
};

int main() {
    time_t t;
    struct tm now;

    t = time(NULL);
    now = *localtime(&t);

    printf("Tanggal dan Waktu Saat ini:\n");
    printf("%s, %d %s %d %02d:%02d:%02d\n",
        HARI[now.tm_wday],
        now.tm_mday,
        BULAN[now.tm_mon],
        now.tm_year + 1900,
        now.tm_hour,
        now.tm_min,
        now.tm_sec
    );

    return 0;
}
