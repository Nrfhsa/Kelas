#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi variabel dengan tipe data yang berbeda
    int umur = 19; // bisa diubah
    float tinggi_badan = 175.5; // bisa diubah
    char golongan_darah = 'O'; // bisa diubah
    const string nama = "Nur Falah"; // tidak bisa diubah
    bool status_menikah = false; // bisa diubah

    // Menampilkan nilai variabel   
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "Tinggi Badan: " << tinggi_badan << " cm" << endl;
    cout << "Golongan Darah: " << golongan_darah << endl;
    cout << "Status Menikah: " << (status_menikah ? "Menikah" : "Belum Menikah") << endl;
    return 0;
}    



        
