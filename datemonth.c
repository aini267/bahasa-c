#include <stdio.h>
#include <time.h>

const char * const HARI[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
const char * const BULAN[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", 
                                "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

int main() {
    time_t t;
    struct tm timeinfo;
    int day, month, year;

    t = time(NULL);
    timeinfo = *localtime(&t);

    /* Meminta user memasukkan tanggal */
    printf("Masukkan Hari: ");
    scanf("%d", &day);
    printf("Masukkan Bulan: ");
    scanf("%d", &month);
    printf("Masukkan Tahun: ");
    scanf("%d", &year);

    /* Memodifikasi nilai variabel timeinfo */
    timeinfo.tm_mday = day;
    timeinfo.tm_mon = month - 1;  // Bulan mulai dari 0 (Januari = 0)
    timeinfo.tm_year = year - 1900;  // Tahun dihitung sejak 1900

    /* Menggunakan mktime untuk memastikan perubahan diterapkan */
    mktime(&timeinfo);

    /* Menampilkan tanggal yang dimodifikasi */
    printf("Tanggal yang dimasukkan: %s, %d %s %d\n",
           HARI[timeinfo.tm_wday],
           timeinfo.tm_mday,
           BULAN[timeinfo.tm_mon],
           timeinfo.tm_year + 1900);

    return 0;
}
