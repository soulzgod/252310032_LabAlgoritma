#include <iostream>
using namespace std;

int main() {
    int n, i;
    long faktorial;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        i = 1;
        faktorial = 1;

        while(i <= n) {
            faktorial = faktorial * i;
            i++;
        }

        cout << "Hasil " << n << "! = " << faktorial << endl;

        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;

    } while(ulang == 'y' || ulang == 'Y');

    cout << "Program selesai.\n";

    return 0;
}

