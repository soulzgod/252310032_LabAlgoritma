#include <iostream>
using namespace std;

int main() {
    int a, b;
    char lagi;

awal:
    cout << "Masukkan bilangan = ";
    cin >> a;

    b = a % 2;
    cout << "Nilai " << a << " % 2 adalah = " << b << endl;

    cout << "\nIngin hitung lagi [Y/T] : ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto awal;

    cout << "\nProgram selesai." << endl;
    return 0;
}
