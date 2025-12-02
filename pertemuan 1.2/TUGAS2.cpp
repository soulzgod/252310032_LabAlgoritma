#include <iostream>
#include <string.h>   
using namespace std;

int main() {
    char kalimat[] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
    char balik[200];
    char kecil[200];

    int x = strlen(kalimat);

    for(int i = 0; i < x; i++) {
        balik[i] = kalimat[x - 1 - i];
    }
    balik[x] = '\0';

    for(int i = 0; i < x; i++) {
        kecil[i] = tolower(balik[i]);
    }
    kecil[x] = '\0';

    cout << "Kalimat asli       : " << kalimat << endl;
    cout << "Setelah dibalik    : " << balik << endl;
    cout << "Huruf kecil        : " << kecil << endl;

    return 0;
}

