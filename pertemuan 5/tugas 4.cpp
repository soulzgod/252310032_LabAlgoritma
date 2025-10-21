#include <iostream>
using namespace std;

int main() {
    int a, i, j, k;

    cout << "Input lebar belah ketupat = ";
    cin >> a;
    cout << endl;

    // BAGIAN ATAS
    for (i = 1; i <= a; i++) {
        // kiri
        for (j = 1; j <= a - i; j++) {
            cout << " *";
        }

        // tengah (kosong)
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "  ";
        }

        // kanan (cermin)
        for (j = 1; j <= a - i; j++) {
            cout << " *";
        }

        cout << endl;
    }

    // BAGIAN BAWAH
    for (i = a; i >= 1; i--) {
        // kiri
        for (j = 1; j <= a - i; j++) {
            cout << " *";
        }

        // tengah (kosong)
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "  ";
        }

        // kanan (cermin)
        for (j = 1; j <= a - i; j++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}

