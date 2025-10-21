#include <iostream>
using namespace std;

int main() {
    int n, i, cek = 0;

    cout << "Masukkan bilangan: ";
    cin >> n;

    if(n <= 1) {
        cout << "Bukan termasuk bilangan PRIMA";
    } else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                cek = 1;
                break;
            }
        }

        if(cek == 0)
            cout << "Termasuk bilangan PRIMA";
        else
            cout << "Bukan termasuk bilangan PRIMA";
    }

    return 0;
}

