#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "1. Luas lingkaran" << endl;
  cout << "2. Keliling lingkaran" << endl;
  cout << "3. Luas segitiga" << endl;
  cout << "4. Teorema pythagoras" << endl;
  cout << "5. Hukum kepler 3" << endl;
  cout << endl;
  
  cout << "Masukan perintah 1 - 5: ";
  int c;
  cin >> c;
  cout << endl;
  
  switch (c) {
    case 1: {
      cout << "Pilih input salah satu:" << endl;
      cout << "1. Jari-jari" << endl;
      cout << "2. Diameter" << endl;
      cout << endl;
      
      cout << "Masukan perintah 1 - 2: ";
      int p;
      cin >> p;
      
      double l;
      const double pi = 3.14159;
      
      if (p == 1) {
        cout << "Masukan jari-jari: ";
        int r;
        cin >> r;
        l = pi * r * r;
        cout << "Luas lingkaran = " << l << " cm²" << endl;
      } else if (p == 2) {
        cout << "Masukan diameter: ";
        int d;
        cin >> d;
        l = 1.0 / 4.0 * pi * d * d;
        cout << "Luas lingkaran = " << l << " cm²"<< endl;
      } else {
        cout << "Pilihan tidak valid!" << endl;
      }
      break;
    }
      
    case 2: {
      cout << "Pilih input salah satu:" << endl;
      cout << "1. Jari-jari" << endl;
      cout << "2. Diameter" << endl;
      cout << endl;
      
      cout << "Masukan perintah 1 - 2: ";
      int p;
      cin >> p;
      
      double k;
      const double pi = 3.14159;
      
      if (p == 1) {
        cout << "Masukan jari-jari: ";
        int r;
        cin >> r;
        k = 2 * pi * r;
        cout << "Keliling lingkaran = " << k << " cm" << endl;
      } else if (p == 2) {
        cout << "Masukan diameter: ";
        int d;
        cin >> d;
        k = pi * d;
        cout << "Keliling lingkaran = " << k << " cm"<< endl;
      } else {
        cout << "Pilihan tidak valid!" << endl;
      }
      break;
    }  
    
    case 3: {
      double a, t, l;
      cout << "Masukan panjang alas: ";
      cin >> a;
      cout << "Masukan tinggi: ";
      cin >> t;
      cout << endl;
      
      l = 1.0 / 2.0 * a * t;
      cout << "Luas segitiga = " << l << " cm²" << endl;
      break;
    }
    
    case 4: {
      cout << "A = Samping" << endl;
      cout << "B = Depan" << endl;
      cout << "C = Miring" << endl;
      cout << endl;
      
      cout << "Pilih sisi yang akan dicari A - C: ";
      double a, b, c;
      char s;
      cin >> s;
      s = tolower(s);
      
      // A² + B² = C²      
      if (s == 'a') {
        cout << "Masukan B: ";
        cin >> b;
        cout << "Masukan C: ";
        cin >> c;
        
        cout << endl;
        a = c * c - b * b;
        a = sqrt(a);
        cout << "Sisi samping (A) = " << a << endl;
      } else if (s == 'b') {
        cout << "Masukan A: ";
        cin >> a;
        cout << "Masukan C: ";
        cin >> c;
        
        cout << endl;
        b = c * c - a * a;
        b = sqrt(b);
        cout << "Sisi depan (B) = " << b << endl;
      } else {
        cout << "Masukan A: ";
        cin >> a;
        cout << "Masukan B: ";
        cin >> b;
        
        cout << endl;
        c = a * a + b * b;
        c = sqrt(c);
        cout << "Sisi miring (C) = " << c << endl;
      }
      break;
    }
    
    case 5: {
      /*
      Ta² / Ra³ = Tb² / Rb³
      Ta² * Rb³ = Tb² * Ra³
      
      Tb² = Ta² * Rb³ / Ra³
      Rb³ = Tb² * Ra³ / Ta²
      */
      cout << "1. Periode planet ke matahari" << endl;
      cout << "2. Jarak rata-rata ke matahari" << endl;
      cout << endl;
      
      cout << "Pilih yang akan dicari 1 - 2: ";
      int p;
      cin >> p;
      cout << endl;
      
      double Ta, Tb, Ra, Rb;
      if (p == 1) {
        cout << "Masukan periode planet 1: ";
        cin >> Ta;
        cout << "Masukan jarak rata-rata planet 1: ";
        cin >> Ra;
        cout << "Masukan jarak rata-rata planet 2: ";
        cin >> Rb;
        cout << endl;
        
        Tb = (Ta * Ta) * ((Rb * Rb * Rb) / (Ra * Ra * Ra));
        Tb = sqrt(Tb);
        cout << "Periode planet 2 = " << Tb << " hari" << endl;
      } else {
        cout << "Masukan periode planet 1: ";
        cin >> Ta;
        cout << "Masukan periode planet 2: ";
        cin >> Tb;
        cout << "Masukan jarak rata-rata planet 1: ";
        cin >> Ra;
        cout << endl;
        
        Rb = (Tb * Tb) * (Ra * Ra * Ra) / (Ta * Ta);
        Rb = pow(Rb, 1.0/3);
        cout << "Jarak rata-rata planet 2 ke matahari = " << Rb << " AU" << endl;
      }
    }
  }
  return 0;
}