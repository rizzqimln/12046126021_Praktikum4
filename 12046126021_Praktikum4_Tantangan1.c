/*
 * Program  :Sistem Cetak Tabel Perkalian
 * Nama     :Rizzqi Maulana Ilhami
 * NIM      :12046126021
 * Deskripsi: Sistem cetak tabel perkalian dengan perulangan for
 */
#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    int N;

    // Header sistem cetak tabel perkalian
    printf("=== Sistem Cetak Tabel Perkalian ===\n");
    // Input nilai 1-10 
    printf("Masukan nilai (1-10): ");
    scanf("%d",&N);
    
    printf("\n======= Hasil Tabel Perkalian ======\n\n");
    // Perulangan for untuk mencetak tabel perkalian 
    for (int i = 1; i <= N; i++ ) { // Perulangan luar untuk mencetak baris
        for (int j = 1; j <= N; j++) { // Perulangan dalam untuk mencetak kolom
            printf("%4d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}
