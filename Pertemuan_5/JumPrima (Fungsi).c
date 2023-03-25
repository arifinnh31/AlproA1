/* Nama File    		: JumPrima (Fungsi).c */
/* Deskripsi    		: Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat      		: Arifin Nurmuhammad Haris - 24060122130059 */
/* Tanggal Pembuatan    : 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsPrima(int N) {
    /* Deskripsi singkat fungsi */
    /* Menentukan apakah sebuah bilangan integer sembarang N adalah bilangan Prima atau Bukan */

    /* Kamus Lokal */
    int i;

    /* Algoritma */
    if (N <= 1) {
        return false;
    }
    for (i = 2; i < N; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    /* Kamus */
    int N, Sn, i;

    /* Algoritma */
    printf("N = ");
    scanf("%d", &N);

    if (N > 0) {
        Sn = 0;
        for (i = 1; i <= N; i++) {
            if (IsPrima(i)) {
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

    return 0;
}