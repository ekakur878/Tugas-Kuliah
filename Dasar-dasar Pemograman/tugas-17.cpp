// Nama : Eka Kurniawan Agustyas Komstyadi
// NBI  : 1462200171

#include "tugasETS.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;
using std::setw;

class Mahasiswa{
  public:
    int no;
    string nim;
    string nama;
    int angka;
    string huruf;
};

class Data{
  public:
    string angka(int nilai){
      string hasil;
      if(nilai >= 95 && nilai <= 100){
        hasil = "A";
      }
      else if(nilai >= 90 && nilai < 95) {
        hasil = "A-";
      }
      else if(nilai >= 85 && nilai < 90) {
        hasil = "AB";
      }
      else if(nilai >= 80 && nilai < 85) {
        hasil = "B+";
      }
      else if(nilai >= 75 && nilai < 80) {
        hasil = "B";
      }
      else if(nilai >= 70 && nilai < 75) {
        hasil = "B-";
      }
      else if(nilai >= 60 && nilai < 70) {
        hasil = "C+";
      }
      else if(nilai >= 55 && nilai < 60) {
        hasil = "C";
      }
      else if(nilai >= 50 && nilai < 55){
        hasil = "C-";  
      }
      else if(nilai >= 0 && nilai < 50){
        hasil = "D";
      }
      
      return hasil;
    }  
};

class Deret1{
  public:
    int konvesinal(int n){
      int a,b,c,i;
      i=5;
      a=0;
      b=1;
      if(n==1){
        cout << a; 
      }
      else{
        cout << a << " " << b << " ";
      }
      for(i=2;i<n;i++){
        c=a+b;
        cout << c << " ";
        a=b;
        b=c;
      }
    }
};

class Deret2{
  public:
    int recursive(int n){
      int r, rn_min_1, rn_min_2;
      rn_min_1 = 1;
      rn_min_2 = 0;
        
      for (int i = 1; i < n; i++){
        if (i == 1) cout << rn_min_2 << " ";
        if (i == 2) cout << rn_min_1 << " ";
      else{ 
        r = rn_min_1 + rn_min_2;
        rn_min_2 = rn_min_1;
        rn_min_1 = r;
        cout << r << " ";     
        }    
      }
    }
};

class Perkalian{
  public:
    int matrik(){
      int C[3][2];  
      int A[3][4]={{2,4,3,5},{3,7,4,6},{9,8,1,7}};
      int B[4][2]={{2,1},{0,2},{1,0},{2,1}};
   
      for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
          int D=0;
          for (int k=0;k<4;k++){
          D = D + A[i][k] * B [k][j];
          }
          C [i][j] = D;
        }
      }

      for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
          cout<<C[i][j]<<" ";
        }
        cout<<endl;
      }
    }
};

void koment(string a){
	cout << "\n\n\t\t" << a; getch;
}
 
int main(){
  char pilih;
  do{
    system("cls");
    cout << "\n\t\t\tMenu : \n\n";
    cout << "\t\t1. Data Mahasiswa\n";
    cout << "\t\t2. Deret Angka Konvesinal\n";
    cout << "\t\t3. Deret Angka Recursive\n";
    cout << "\t\t4. Perkalian Matriks\n";
    cout << "\t\t5. Keluar\n\n";
  
    pilih=getch();
    switch (pilih){  
      case '1':{ 
        cout << "1. Data Mahasiswa\n\n";
        Data abjad;
        Mahasiswa daspro[6]=
          {{1,"1462200020","Nama",100,abjad.angka(100)},
          {2,"1462200711","Bill Clontong",59,abjad.angka(59)},
          {3,"1462200819","Budi Agastya",90,abjad.angka(90)},
          {4,"1462200925","Ayu Ashari",80,abjad.angka(80)},
          {5,"1462200826","Desy Ratnasari",85,abjad.angka(85)}};
  
        for (int i=0;i<69;i++)
        cout << "=";cout << endl;
   
        cout << "No" << setw(10)
             << "NIM" << setw(20)
             << "NAMA" << setw(20) 
             << "NILAI" << setw(17)
             << "HURUF" << endl;
   
        for (int i=0;i<69;i++)
        cout << "-";cout << endl;
  
        for(int i=0;i<5;i++){
          cout << daspro[i].no << setw(15);
          cout << daspro[i].nim << setw(25);
          cout << daspro[i].nama << setw(10);
          cout << daspro[i].angka << setw(16);
          cout << daspro[i].huruf << endl;
        }
        cout << "\n\n";
        pilih=getch();
        break;}
      case '2':
        cout << "2. Deret Angka Konvesinal\n\n";
        Deret1 n1;
        int a;
        cout << "Masukan jumlah deret : ";
        cin >> a;
        cout << endl;
        cout << "Deret angka : " << n1.konvesinal(a);
        cout << endl;
        cout << "\n\n";
        pilih=getch();
        break;
      case '3': 
        cout << "3. Deret Angka Recursive\n\n";
        Deret2 n2;
        int k;
        cout << "Masukan jumlah deret : ";
        cin  >> k;
        cout << endl;
        cout << "Deret angka : " << n2.recursive(k);
        cout << endl;
        cout << "\n\n";
        pilih=getch();
        break;
      case '4':
        cout << "4. Perkalian Matrik\n\n";
        Perkalian total;
  
        total.matrik();
        cout << endl;
      case '5':
        break;
      default:
        koment("Salah pilih bro");
    }
  }
  while (pilih != '5');

  return 1;
}