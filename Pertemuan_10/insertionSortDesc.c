/* Nama File    		: insertionSortDesc.c */
/* Deskripsi    		: Mengurut tabel integer [1..N] terurut mengecil dengan maksimum suksesif */
/* Pembuat      		: Arifin Nurmuhammad Haris - 24060122130059 */
/* Tanggal Pembuatan    : 22 Mei 2023 */

#include <stdio.h>
#include <stdlib.h>

void insertionSortDesc(int T[], int N) {
    /* Kamus Lokal */
    int i, Pass, Temp;
    /* Algoritma */
    for (Pass = 1; Pass < N; Pass++) {
        Temp = T[Pass];
        i = Pass - 1;
        while (Temp > T[i] && i >= 0) {
            T[i + 1] = T[i];
            i--;
        }
        T[i + 1] = Temp;
    }
}

void printArray(int T[], int N) {
    /* Kamus Lokal */
    int i;
    /* Algoritma */
    printf("T = {");
    for (i = 0; i < N; i++) {
        if (i == N - 1) {
            printf("%d", T[i]);
        } else {
            printf("%d, ", T[i]);
        }
    }
    printf("}\n");
}

int main() {
    /* Kamus */
    int T[] = {19, 1, 28, 5, 6, 10, 11, 3, 7, 20};
    int N = sizeof(T) / sizeof(T[0]);
    /* Algoritma */
    insertionSortDesc(T, N);
    printArray(T, N);
    return 0;
}