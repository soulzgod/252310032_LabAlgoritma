#include <iostream>
using namespace std;

int main () {
    // Deklarasi variabel
    float r, t, pi, volume;

    // Nilai pi
    pi = 3.14;

    // Judul program
    cout << "Menghitung Volume Tabung" << endl;

    // Input jari-jari dan tinggi
    cout << "Masukkan jari-jari alas : ";
    cin >> r;
    cout << "Masukkan tinggi tabung : ";
    cin >> t;

    // Hitung volume
    volume = pi * r * r * t;

    // Tampilkan langkah-langkah
    cout << "Rumus Volume Tabung = pi x r x r x t" << endl;
    cout << "pi = " << pi << endl;
    cout << "r = " << r << endl;
    cout << "t = " << t << endl;
    cout << "Volume = " << pi << " x " << r << " x " << r << " x " << t << endl;
    cout << "Hasil = " << volume << endl;

    return 0;
}

