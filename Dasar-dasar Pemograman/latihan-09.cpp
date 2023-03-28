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

        if (nilai >= 95 && nilai <= 100)
        {
            hasil = "A+";
        }
        else if (nilai >= 90 && nilai <= 94) { 
            hasil= "A";
        }
        else if (nilai >= 85 && nilai <= 89) { 
            hasil= "A-";
        }
        else if (nilai >= 80 && nilai <= 84) { 
            hasil= "B+";
        }
        else if (nilai >= 75 && nilai <= 79) { 
            hasil= "B";
        }
        else if (nilai >= 70 && nilai <= 74) { 
            hasil= "B-";
        }
        else if (nilai >= 65 && nilai <= 69) { 
            hasil= "C+";
        }
        else if (nilai >= 60 && nilai <= 64) { 
            hasil= "C";
        }
        else if (nilai >= 55 && nilai <= 59) { 
            hasil= "C-";
        }
        else if (nilai >= 30 && nilai <= 54) { 
            hasil= "D";
        }
        else if (nilai >= 0 && nilai <= 29) { 
            hasil= "E";
        }

        cout << "Nilai Angka : "<< hasil <<endl;
        cout <<"==============================================";
}