#include <iostream>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Masukkan Nama Siswa : ";
    cin >> nama;
    cout << "Masukkan Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Masukkan Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Masukkan Nilai Pertandingan III : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya." << endl;

    if (rata >= 85) {
        cout << "Hadiah yang didapat adalah Komputer Core i5." << endl;
    } else if (rata >= 70) {
        cout << "Hadiah yang didapat adalah Uang Rp. 2.500.000." << endl;
    } else {
        cout << "Hadiah yang didapat adalah Hiburan." << endl;
    }

    return 0;
}
