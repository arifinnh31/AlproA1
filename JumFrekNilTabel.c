/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Arifin Nurmuhammad Haris - 24060122130059 */
/* Tanggal Pembuatan    : 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Kamus */
    int N, JumlahElmtSementara, Jumlah = 0, i, j;
    int T[100], JumlahElmt[100];

    /* Algoritma */
    printf("N = ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        JumlahElmt[i] = 1;
    }

    for (i = 0; i < N; i++) {
        JumlahElmtSementara = 1;
        for (j = i + 1; j < N; j++) {
            if (T[i] == T[j]) {
                JumlahElmtSementara++;
                JumlahElmt[j] = 0;
            }
        }
        if (JumlahElmt[i] != 0) {
            JumlahElmt[i] = JumlahElmtSementara;
        }
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        if (JumlahElmt[i] > 1) {
            Jumlah += T[i] * JumlahElmt[i];
        }
    }

    printf("%d", Jumlah);

    return 0;
}