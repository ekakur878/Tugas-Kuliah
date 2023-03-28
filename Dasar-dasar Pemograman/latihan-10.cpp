#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>

using namespace std;

void koment(string a){
  cout << "\n\n\t\t" << a; getch();
}

int main(){
  char pilih;
  do{
    system("cls");
    cout << "\n\t\tMenu : \n\n";
    cout << "\t\t1. Konversi Data\n";
    cout << "\t\t2. Menyusun Deret Bilangan\n";
    cout << "\t\t3. Mencari Akar Persamaaan Kuadrat\n";
    cout << "\t\t4. Menampilkan Nilai Akhir per Mahasiswa\n";
    cout << "\t\t5. Selesai\n\n";
    cout << "\t\tPilih Menu nomor ? ";
    cout << "\n\n";
  
    pilih=getch();
    switch (pilih){  
    case '1':
    	system("cls");
    	cout << "1. Konversi Data\n";
    	pilih=getch();
    	break;
    case '2':
    	system("cls");
    	cout << "2. Menyusun Deret Bilangan\n";
    	pilih=getch();
    	break;
    case '3':
    	system("cls");
    	cout << "3. Mencari Akar Persamaaan Kuadrat\n";
    	pilih=getch();
    	break;
    case '4':
    	system("cls");
    	cout << "4. Menampilkan Nilai Akhir per Mahasiswa\n";
    	pilih=getch();
    	break;
    case '5':
    	system("cls");
    	exit(0);
    	break;
    default:
    	system("cls");
      koment("Salah pilih bro");
    }
  }
  while (pilih != '5');
  system("cls");
  cout << "Terima Kasih";
  
  return 0;
}