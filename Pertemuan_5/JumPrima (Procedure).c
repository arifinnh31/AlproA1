/* Nama File    		: JumPrima (Procedure).c */
/* Deskripsi    		: Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat      		: Arifin Nurmuhammad Haris - 24060122130059 */
/* Tanggal Pembuatan    : 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

void JumPrima(int N) {
    /* Deskripsi singkat prosedur */
    /* Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut */

    /* Kamus */
    int JumlahFaktor, Sn, i, j;

    /* Algoritma */
    if (N > 0) {
        Sn = 0;
        for (i = 1; i <= N; i++) {
            JumlahFaktor = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    JumlahFaktor++;
                }
            }
            if (JumlahFaktor == 2) {
                if (i == 2) {
                    printf("%d", i);   
                } else {
                    printf("+%d", i);
                }
                Sn += i;
            }
        }
        printf(" dengan Jumlahan Deret Bilangannya adalah Sn=%d", Sn);
    } else {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    }
}

int main() {
    /* Kamus */
    int N;

    /* Algoritma */
    printf("N = ");
    scanf("%d", &N);

    JumPrima(N);

    return 0;
}