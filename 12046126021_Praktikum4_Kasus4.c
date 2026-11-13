/*
 * Program  : Menu Aplikasi Kasir Minimarket
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: Do-While untuk menu + switch-case untuk pilihan
 */
#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja = 0;

    // Menampilkan header aplikasi kasir minimarket
    printf("=== APLIKASI KASIR MINIMARKET SI ===\n");

    // Do-while loop untuk pemilihan menu utama
    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Tambah Belanja\n");
        printf("2. Lihat Total Belanja\n");
        printf("3. Bayar & Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        // Switch-case untuk memilih pilihan menu yang tersedia
       switch (pilihan) {
           case 1:
               // Case 1 - menu tambah belanja
               printf("\n-- Tambah Belanja --\n");
               printf("Harga barang : Rp");
               scanf("%f", &harga);
               printf("Jumlah beli : ");
               scanf("%f", &jumlah);

               // Perhitungan subtotal belanja
               subtotal = harga * jumlah;

               // Perhitungan total belanja dengan subtotal menggunakan operator shortcut
               total_belanja += subtotal;
               printf("Subtotal     : Rp %.2f\n", subtotal);
               printf("(Total belanja sementara: Rp %.2f\n", total_belanja);
               break;
           case 2:
               // Output total belanja sementara
               printf("\nTotal belanja sementara: Rp %.2f\n", total_belanja);
               break;
           case 3:
               // Output pembayaran dan total pembayaran
               printf("\n=== PEMBAYARAN ===\n");
               printf("Total yang  harus dibayar: Rp %.2f\n", total_belanja);
               printf("Terima kasih telah berbelanja!\n");
               break;
           default:
               // Output error menu tidak tersedia
               printf("\nERROR: Menu tidak tersedia. Pilih 1-3 saja.\n");
       }
    } while (pilihan != 3);

    return 0;
}
