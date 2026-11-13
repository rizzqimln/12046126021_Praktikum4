/*
 * Program  :Sistem Cetak Tabel Perkalian
 * Nama     :Rizzqi Maulana Ilhami
 * NIM      :12046126021
 * Deskripsi:Sistem login dengan menggunakan perulangan do-while dan struktur seleksi if-else
 */
#include <stdio.h>
#include <string.h>

int main() {
    // Mendeklarasikan variabel
    const char USERNAME_BENAR[50] = "admin";
    const int PASSWORD_BENAR = 1234;
    char username[50];
    int password = 0;
    int percobaan = 0;
    int berhasil = 0;

        // Header program "Sistem Login"
        printf("=========== SISTEM LOGIN ===========\n");
        printf("Selamat datang di sistem login SI !\n");
        printf("====================================\n");

    // Perulangan do-while
    do {
        // Input username dan password untuk program        
        printf("Masukkan username Anda: ");
        scanf("%s", &username);
        printf("Masukkan password Anda (Angka): ");
        scanf("%d", &password);

        // Struktur seleksi if else untuk mengecek kondisi
        if (strcmp(username, USERNAME_BENAR) == 0 && password == PASSWORD_BENAR) {
            printf("====================================\n");
            printf("           Login Berhasil      ");
            printf("\n====================================\n");
            break; // Break untuk menghentikan program jika kondisi benar
        } else {
            percobaan++;
            printf("====================================\n");
            printf("            Login Gagal         ");
            printf("\n====================================\n");
            printf("Anda mencoba sebanyak %d kali percobaan.\n\n", percobaan);
        }
        // Perulangan while jika percobaan di bawah 3 
        } while (percobaan < 3 && berhasil == 0);

        /* Struktur seleksi if untuk mengecek kondisi.
        Jika percobaan = 3 dan berhasil = 0, akun akan terkunci*/
            if (percobaan == 3 && berhasil == 0){ 
                printf("====================================\n");
                printf("    Akun Terkunci! Hubungi admin.   \n");
                printf("====================================\n");
            }
    return 0;
}
