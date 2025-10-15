#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        };
        for (int k = 1; k <= i; k++) {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        };
        for (int k = 1; k <= i * 2 - 1; k++) {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }; 

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        };
        cout << endl;
    }; 
}
    