#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi variabel
    int a, b; 

    // Input nilai variabel
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // Operasi Aritmatika dan menampilkan hasilnya
    cout << "Penjumlahan: " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Pengurangan: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Perkalian: " << a << " * " << b << " = " << (a * b) << endl;
    cout << "Pembagian: " << a << " / " << b << " = " << (float(a)/ float(b)) << endl;
    cout << "Modulus: " << a << " % " << b << " = " << (a % b) << endl;

    return 0;
}