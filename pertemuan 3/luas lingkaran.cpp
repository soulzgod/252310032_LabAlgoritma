#include <iostream>
using namespace std;

int main (){
	float r, pi, luas; //deklarasi variabel
	
	pi = 3.14;
	cout << "Menghitung Luas Lingkaran" <<endl; //judul program
	cout << "Masukan jari-jari(r): "; //input jari-jari
	cin >> r;
	
	luas = pi*r*r; //proses hitung
	
	//langkah-langkah perhitungan
	cout << "Rumus Luas Lingkaran = pi x r x r" <<endl; 
	cout << "pi ="<< pi << endl;
	cout << "r ="<< r << endl;
	cout << "Luas ="<< pi << "x" << r << "x" << r <<endl;
	cout << "Hasil =" << luas <<endl;
	
	return 0;
}
