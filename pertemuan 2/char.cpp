#include <iostream>
using namespace std;

int main()
{
	string y; string z; char x[40];
	
	cout<<"Masukan NPM Anda: ";
	cin>> x;
	cin.ignore();
	cout<<"Masukan Nama Anda: ";
	getline(cin, y);
	cout<<"Masukan Alamat Anda: ";
	getline(cin, z);
	
	cout<<"NPM Anda adalah:"<<x;
	cout<<"\nNama Anda adalah:"<<y;
	cout<<"\nAlamat Anda adalah:"<<z;
	
	return 0;
}
