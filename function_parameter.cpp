#include <iostream>
using namespace std;

void jokoMakan(string makan[3]) {
    for (int i = 0; i < 3; i++) {
        cout << "joko sedang makan " << makan[i] << " " << endl;
    }
}

int main() {
   string makan[3]; 
   cout << "Masukkan 3 jenis makanan:" << endl;
   for (int i = 0; i < 3; i++) {
      getline(cin, makan[i]); 
   }
   
   jokoMakan(makan);
   return 0;
}

