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
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar arr[i] dan arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    

    // TODO 2: Temukan dan simpan nilai tengah (median) dari array yang sudah terurut.
    // Ingat, indeks array dimulai dari 0.
    int median;
    if (N % 2 == 0) {
        median = (arr[N / 2 - 1] + arr[N / 2]) / 2; // Untuk jumlah elemen genap
    } else {
        median = arr[N / 2]; // Untuk jumlah elemen ganjil
    }

    cout << median << endl;
    return 0;
}