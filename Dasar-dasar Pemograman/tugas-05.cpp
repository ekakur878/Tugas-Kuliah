/* ================================================
   Program  : Perhitungan Matematik
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
   Program ini berisi operasi input data variabel
=================================================== */
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    string nama, nik, ttl, jk, agama, pk, kw, alamat, kel, kec; //deklarasi variabel
    char Yes;

    cout<<"Membuat Program Input Data Diri\n\n";
    
    cout<<"Masukan Data Diri Anda"<<endl;
    cout<<"NAMA \t: "; 
        getline(cin,nama); //input data variabel nama. NAMA : Eka Kurniawan Agustyas
    cout<<"NIK  \t: "; 
        getline(cin,nik); //input data variabel nik. NIK : 152908629003
    cout<<"Tempat, tanggal lahir \t: ";
        getline(cin,ttl); //input data variabel ttl. Tempat, tanggal lahir : Gresik, 24 agustus 1999
    cout<<"Jenis kelamin \t:";
        getline(cin,jk); //input data variabel jenis kelamin. Jenis kelamin : Pria
    cout<<"Agama \t:\t";
        getline(cin,agama);
    cout<<"Pekerjaan \t:\t";
        getline(cin,pk);
    cout<<"Status Perkawinan \t:\t";
        getline(cin,kw);
    cout<<"Alamat \t:";
        getline(cin,alamat); //input data variabel alamat. Alamat : Dsn Pucung, balongpanggang
    cout<<"Kelurahan \t:\t";
        getline(cin,kel); //input data variabel kelurahan
    cout<<"Kecamatan \t:\t";
        getline(cin,kec); //input data variabel kecamatan
    cout<<"\n\n";

    cout<<"Berikut Data Diri anda"<<endl;
    cout<<"NAMA \t:\t"<<nama<<endl; //menampilkan hasil input variabel nama
    cout<<"NIK \t:\t"<<nik<<endl; //menampilkan hasil input variabel nik
    cout<<"Tempat, tanggal lahir \t:\t"<<ttl<<endl; //menampilkan hasil input variabel ttl
    cout<<"Jenis kelamin \t:\t"<<jk<<endl; //menampilkan hasil input variabel jk
    cout<<"Agama \t:\t"<<agama<<endl;
    cout<<"Pekerjaan \t:\t"<<pk<<endl;
    cout<<"Status Perkawinan \t:\t"<<kw<<endl;
    cout<<"Status Perkawinan \t:\t"<<kw<<endl;
    cout<<"Alamat \t:\t"<<alamat<<endl;
    cout<<"Kelurahan \t:\t"<<kel<<endl;
    cout<<"Kecamatan \t:\t"<<kec<<endl;
    cout<<"Apakah data semua sudah benar ? [Y/T]\t";
    Yes=getche();
    cout<<"\n\nData disimpan di database";

    return 0;
}