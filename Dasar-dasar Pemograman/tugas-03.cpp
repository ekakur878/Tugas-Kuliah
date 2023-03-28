
/* ================================================
   Program  : Perhitungan Matematik
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
   Program ini berisi operasi matematika sederhana
================================================ */
 
#include <iostream>
#include <math.h>

using namespace std;

int a=10, b=200, c=2;  //Untuk deklarasi variabel
int main(){

    cout<<"Saya bisa membuat Program C"<<endl;
    cout<<"================================================"<<endl;

    // menampilakan variabel di layar
    cout<<"Variable a = "<<a<<endl;
    cout<<"Variable b = "<<b<<endl;
    cout<<"Variable c = "<<c<<endl;

    // Baris berikut adalah operasi perkalian bilangan
    cout << "Menghitung Perkalihan \t" << a << "*" << c << "="<< a*c << endl;

    // Baris berikut adalah operasi pembagian bilangan
    cout << "Menghitung Pembagian \t" << b << "/" << c << "="<< b/c << endl;

    // Baris berikut adalah operasi penambahan bilangan
    cout << "Menghitung Penambahan \t" << a << "+" << b << "="<< a+b << endl;

    // Baris berikut adalah operasi pengurangan bilangan
    cout << "Menghitung Pengurangan \t" << a << "-" << c << "="<< a-c << endl;

    // Baris berikut adalah operasi sisa bagi bilangan
    cout << "Menghitung Sisa bagi \t" << c << "%" << a << "="<< c%a << endl;

    // Baris berikut adalah operasi pangkat bilangan
    cout << "Menghitung Pangkat \t"<< a << " pangkat " << c << "=" << pow(a, c) << endl ;

    return 0;

} 
/* Akhir program -------  */ 