/* ================================================
   Program  : Konversi Nilai Ke Angka
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
=================================================== */

#include <iostream>
using namespace std ;

int main (){

        int nilai;
        string hasil;

        cout << "===== Program Konversi Nilai ke Angka =====" << endl;
        cout << "\nMasukan Nilai : ";
        cin >> nilai;

        if (nilai >= 80 && nilai <= 100)
        {
            hasil = "A";
        }
        else if (nilai >= 70 && nilai <= 79) { 
            hasil= "B";
        }
        else if (nilai >= 60 && nilai <= 69) { 
            hasil= "C";
        }
        else if (nilai >= 0 && nilai <= 59) { 
            hasil= "E";
        }

        cout << "Nilai Angka : "<< hasil <<endl;
        cout <<"==============================================";
}