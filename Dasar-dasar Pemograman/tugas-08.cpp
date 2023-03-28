/* ================================================
   Program  : Pencarian Sebuah Kata Dalam kalimat
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
=================================================== */

#include <iostream>


using namespace std;

int main (){

    string a, b;
    int c;

    cout << "Program untuk mencari satu kata yang ada dalam suatu kalimat lengkap" <<endl ;
    cout << "========================================================================"<<endl;
    cout << "\nMasukan Kalimat lengkap terdiri Subjek, Predikat, Objek, dan Keterangan"<<endl;

    cout << "Masukan Kalimat : " ;
    getline (cin, a);
    cout << "Kata yang dicari : ";
    cin >> b ;
    cout<<endl;
    c = a.find(b);
    if (c >= 0)
     {
            cout << "kata " << b << " berada dikalimat" << endl;
     }
    else {
            cout << "kata yang anda cari tidak ditemukan" << endl;
     }
      
}