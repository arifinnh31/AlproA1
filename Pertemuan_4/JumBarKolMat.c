/* Nama File    		: JumBarKolMat.c */
/* Deskripsi    		: Menjumlahkan semua elemen pada baris dan kolom Tabel 2 dimensi T */
/* Pembuat      		: Arifin Nurmuhammad Haris - 24060122130059 */
/* Tanggal Pembuatan    : 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Kamus */
    int M, N, JumlahBaris, JumlahKolom, i, j;
    int Matrik[100][100];

    /* Algoritma */
    printf("M = ");
    scanf("%d", &M);
    printf("N = ");
    scanf("%d", &N);

    printf("\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Matrik[%d][%d] = ", i, j);
            scanf("%d", &Matrik[i][j]);
        }
    }
    printf("\n");

    printf("Matriknya :\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", Matrik[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < M; i++) {
        JumlahBaris = 0;
        for (j = 0; j < N; j++) {
            JumlahBaris += Matrik[i][j];
        }
        printf("Baris ke-%d -> %d\n", i + 1, JumlahBaris);
    }

    for (i = 0; i < N; i++) {
        JumlahKolom = 0;
        for (j = 0; j < M; j++) {
            JumlahKolom += Matrik[j][i];
        }
        printf("Kolom ke-%d -> %d\n", i + 1, JumlahKolom);
    }

    return 0;
}