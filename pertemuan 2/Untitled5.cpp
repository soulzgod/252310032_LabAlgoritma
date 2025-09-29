//...program menghitung harga total
#include <iostream>
using namespace std;
#define harga 4500.02 //...menentukan harga dengan define

int main()
{
	float jumlah,total;
	
	cout<< "Masukan jumlah Barang = " ;
	cin>> jumlah;
	total = harga * jumlah ;
	cout<<"\nYang harus dibayar = "<<total;
}
