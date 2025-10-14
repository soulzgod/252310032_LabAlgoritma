#include <iostream> // Library untuk input dan output
using namespace std;

int main(){
    int x = 50; // Inisialisasi variabel x dengan nilai 50

    int a, b, c, d, e; // Deklarasi variabel a, b, c, d, e

    // a bernilai true (1) jika x lebih besar dari 5 + 5 (yaitu 10)
    a = x > 5 + 5;     // 50 > 10 ? true ? a = 1

    // b bernilai true (1) jika x lebih besar dari 100
    b = x > 100;       // 50 > 100 ? false ? b = 0

    // c adalah hasil logika AND antara a dan b
    c = a && b;        // 1 && 0 ? false ? c = 0

    // d adalah hasil logika OR antara a dan b
    d = a || b;        // 1 || 0 ? true ? d = 1

    // e adalah hasil logika NOT dari c
    e = !(c);          // !0 ? true ? e = 1

    // Menampilkan hasil masing-masing variabel
    cout << "\nNilai a = x > 5+5 = " << a << endl;
    cout << "\nNilai b = x > 100 = " << b << endl;
    cout << "\nNilai c = a && b = " << c << endl;
    cout << "\nNilai d = a || b = " << d << endl;
    cout << "\nNilai e = !(c) = " << e << endl;

    getchar(); // Menunggu input karakter agar jendela console tidak langsung tertutup (khusus Windows)
}

