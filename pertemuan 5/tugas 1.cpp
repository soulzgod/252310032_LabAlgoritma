#include <iostream>
using namespace std;

int main() {
    int i, j;

    // i = baris, j = kolom
    for(i = 1; i <= 5; i++) {          // 5 baris
        for(j = 1; j <= 6; j++) {      // 6 kolom
            cout << i;                 // cetak angka sesuai baris
        }
        cout << endl;                  // pindah ke baris berikutnya
    }

    return 0;
}
