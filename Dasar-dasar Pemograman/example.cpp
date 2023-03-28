#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int menu;
    float kll, luas;
    const float pi = 3.14;
    char ulang;

    do{
        cout << "Nama   : Eka Kurniawan Agustyas Komstyadi \n";
        cout << "NBI    : 1462200171 \n";
        cout << "******************** PROGRAM MENGHITUNG LUAS DAN KELILING ******************** \n";
        cout << "1). Persegi \n2). Persegi Panjang  \n3). Segetiga \n4). Lingkaran \n";
        cout << "Pilih salah satu menu di atas  : "; 
        cin >> menu;
        cout << endl;

        switch (menu)
        {
        case 1 :
            cout << "Menghitung Luas dan Keliling Persegi";
            // deklarasi variabel dan input panjang sisi
                int ps;
                cout << "\n Masukan panjang sisi :  ";
                cin >> ps;

            // proses menghitung luas dan persegi
                luas    = ps * ps;
                kll     = ps * 4;
            // cetak luas dan keliling persegi
                cout << "Luas persegi dengan panjang sisi " << ps << " adalah    :   " << luas << endl;
                cout << "Keliling persegi dengan panjang sisi " << ps << " adalah   :   " << kll << endl;
            break;
        
        case 2 :
            cout << "Menghitung Luas dan Keliling Persegi Panjang";
            // deklarasi variabel dan input panjang sisi
                int p, l;
                cout << "\nMasukan panjang :  ";
                cin >> p;
                cout << "Masukan lebar :  ";
                cin >> l;
            // proses menghitung luas dan persegi
                luas    = p * l;
                kll     = 2*p + 2*l;
            // cetak luas dan keliling persegi
                cout << "Luas persegi dengan panjang " << p << " Lebar " << l <<" adalah    :   " << luas << endl;
                cout << "Keliling persegi dengan panjang sisi " << ps << " Lebar " << l << " adalah   :   " << kll << endl;
            break;

        default:
            cout << "maaf menu tidak tersedia";
        }
        cout << endl;
        cout << "apakah ingin menampilkan kembali menu perhitungan? (y/t) : ";
        cin >> ulang;
        cout << endl;
    }
    while (ulang!= 't');
    cout << "terima kasih";
    cout << endl;
}
