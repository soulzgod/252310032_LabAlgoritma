#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main ()
{
	char a1[20]="Teknik";
	char a2[20]="Informatika";
	cout<<"Kalimat 1 :"<<a1<<endl;
	cout<<"Kalimat 2 :"<<a2<<endl;

    strcat(a1, a2); 
    cout<<"Hasil Penggabungannya = "<<a1;
    getchar();
}
