#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], C[10][10];
    int baris1, kolom1, baris2, kolom2;
    int pilihan;

    cout << "---- PROGRAM OPERASI MATRIKS ----\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "Pilih operasi: ";
    cin >> pilihan;

    // Input ukuran matriks
    cout << "\nMasukkan ukuran matriks A:\n";
    cout << "Baris: "; cin >> baris1;
    cout << "Kolom: "; cin >> kolom1;

    cout << "\nMasukkan ukuran matriks B:\n";
    cout << "Baris: "; cin >> baris2;
    cout << "Kolom: "; cin >> kolom2;

    // Input elemen matriks A
    cout << "\nInput elemen Matriks A:\n";
    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom1; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Input elemen matriks B
    cout << "\nInput elemen Matriks B:\n";
    for (int i = 0; i < baris2; i++) {
        for (int j = 0; j < kolom2; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    cout << "\n=== HASIL ===\n";

    // --------------------
    // PENJUMLAHAN
    // --------------------
    if (pilihan == 1) {
        if (baris1 != baris2 || kolom1 != kolom2) {
            cout << "ERROR: Ukuran matriks harus sama untuk penjumlahan!\n";
            return 0;
        }

        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom1; j++) {
                C[i][j] = A[i][j] + B[i][j];
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    // --------------------
    // PENGURANGAN
    // --------------------
    else if (pilihan == 2) {
        if (baris1 != baris2 || kolom1 != kolom2) {
            cout << "ERROR: Ukuran matriks harus sama untuk pengurangan!\n";
            return 0;
        }

        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom1; j++) {
                C[i][j] = A[i][j] - B[i][j];
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    // --------------------
    // PERKALIAN
    // --------------------
    else if (pilihan == 3) {
        if (kolom1 != baris2) {
            cout << "ERROR: Kolom A harus sama dengan baris B untuk perkalian!\n";
            return 0;
        }

        // Inisialisasi C dengan 0
        for (int i = 0; i < baris1; i++)
            for (int j = 0; j < kolom2; j++)
                C[i][j] = 0;

        // Proses perkalian
        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom2; j++) {
                for (int k = 0; k < kolom1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    else {
        cout << "Pilihan tidak valid!\n";
    }

    return 0;
}

