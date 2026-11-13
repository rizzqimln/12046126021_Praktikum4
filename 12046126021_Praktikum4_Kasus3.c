/*
 * Program  : Game Tebak Angka
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: While loop untuk game tebak angka dengan petunjuk
 */
#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    const int ANGKA_RAHASIA = 73;
    int tebakan = 0;
    int jumlah_coba = 0;

    // Menampilkan header game tebak angka
    printf("=== GAME TEBAK ANGKA ====\n");
    printf("Saya punya angka rahasia antara 1-100.\n");
    printf("Coba tebak!\n\n");

    // Perulangan while untuk menebak angka rahasia
    while (tebakan != ANGKA_RAHASIA) {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);
        jumlah_coba++;

        // Struktur seleksi if untuk menentukan kondisi tebakan
        if (tebakan < ANGKA_RAHASIA) {
            printf("Tebakan terlalu KECIL! Coba lagi.\n\n"); // Output printf jika tebakan terlalu kecil
        } else if (tebakan > ANGKA_RAHASIA) {
            printf("Tebakan terlalu BESAR! Coba lagi.\n\n"); // Output printf jika tebakan terlalu besar
        } else {
            printf("\n*** SELAMAT! Anda benar! ***\n");
            printf("Angka rahasianya adalah: %d\n", ANGKA_RAHASIA); // Output printf jika tebakan benar
        }
    }

    printf("\nAnda menebak sebanyak %d kali.\n", jumlah_coba); // Output jumlah tebakan yang sudah dilakukan
    printf("Terima kasih sudah bermain!\n");

    return 0;
}
