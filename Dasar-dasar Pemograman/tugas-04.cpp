/* ================================================
   Program  : Perhitungan Matematik
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
   Program ini berisi operasi menukar data
================================================ */

#include <iostream>
using namespace std;

int a=100, b=200, c; //Isi variabel

int main(){

    cout<<"Program menukar data A dan B"<<endl; 
    cout<<"Variabel A = "<< a <<endl; //menampilkan isi variabel A
    cout<<"Variabel B = "<< b <<endl; //menampilkan isi variabel B
    cout<<"\n\n";
    cout<<"Penukaran variabel"<<endl;
    c=a;
    a=b; 
    b=c;                             //program penukaran variabel
    cout<<"Variabel A = "<< a <<endl; //menapilkan isi variabel A setelah di tukar
    cout<<"Variabel B = "<< b <<endl; //menapilkan isi variabel B setelah di tukar

    return 0;
}
//program selesai
