/*
 * Program  : Sistem Penilaian Mahasiswa
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: For loop untuk hitung rata-rata, max, dan min
 */
#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    int jumlah_mhs;
    float nilai, total = 0, rata;
    float max = 0, min = 100;

    // Menampilkan header dan input jumlah mahasiswa
    printf("=== SISTEM PENILAIAN MAHASISWA SI ===\n");
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mhs);

    // For loop untuk menhitung rata-rata nilai mahasiswa
    for (int i = 1; i <= jumlah_mhs; i++) {
        // Menampilkan nilai mahasiswa ke berapa
        printf("  Nilai mahasiswa ke-%d: ", i);
        scanf("%f", &nilai);

        total += nilai; // akumulasi total nilai

        // Struktur seleksi if nilai, jika nilai lebih besar dari max
        if (nilai > max) {
            max = nilai;
        }
        // Struktur seleksi if nilai, jika nilai lebih kecil dari min
        if (nilai < min) {
            min = nilai;
        }
    }

    // Perhitungan nilai rata-rata
    rata = total / jumlah_mhs;

    // Output akhir laporan Nilai Kelas SI
    printf("\n==================================\n");
    printf("        LAPORAN NILAI KELAS SI      \n");
    printf("Jumlah mahasiswa  : %d\n", jumlah_mhs);
    printf("Total Nilai       : %.2f\n", total);
    printf("Rata-rata kelas   : %.2f\n", rata);
    printf("Nilai Tertinggi   : %.2f\n", max);
    printf("Nilai Terendah    : %.2f\n", min);
    printf("\n==================================\n");

    return 0;
}