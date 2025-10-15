#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // TODO 1: Urutkan array 'arr' terlebih dahulu.
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar arr[j] dan arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    int median;

    // TODO 2: Temukan dan simpan nilai tengah (median) dari array yang sudah terurut.
    if (N % 2 == 0) {
        median = (arr[N / 2 - 1] + arr[N / 2]) / 2; // Untuk jumlah elemen genap
    } else {
        median = arr[N / 2]; // Untuk jumlah elemen ganjil
    }
    // Ingat, indeks array dimulai dari 0.
    
    cout << median << endl;
    return 0;
}