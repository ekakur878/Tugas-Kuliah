#include <iostream>
#include <math.h>
using namespace std;

int main () {

    float jarakbelakang;
    float tinggi = 2.44;

    cout << "Nama   : Eka Kurniawan Agustyas Komstyadi \n";
    cout << "NBI    : 1462200171 \n";
    cout << "*********************Mencari Panjang Tiang Miring Gawang*********************\n";

    // input data untuk alas
    cout << "Masukan jarak kebelangkang dari gawang (alas)  : ";
        cin >> jarakbelakang;

    // data tinggi tiang
    cout << "Tingi tiang     \t\t\t\t: " << tinggi ;
    cout << "\n===============================================================================";
    cout << "\nRumus phytagoras segitiga m^2 = t^2 + a^2 "; // m = miring, t = tinggi, a = alas

    // penghitungan phytagoras
    float miring = sqrt( pow(2, tinggi) + pow(2, jarakbelakang) );
    cout << "\nMencari sisi miring    \t\t\t\t: " << miring ;
    cout << endl;

    cout << "\nJadi pipa sisi miring yang di butuhkan \t\t: " << miring <<"m";
}