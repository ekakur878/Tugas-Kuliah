#include <iostream>
#include <conio.h>
using namespace std;

void maximal(){
    int angka, jumlah, max ;
    cout <<"\n===== Program Pencari Nilai Maksimum =====";
    cout << "\nBerapa banyak angka yang ingin di komparasi ?";
    cout <<endl;
    cin >> jumlah;
    for (int i=1; i<=jumlah; i++){
        cout <<"\nMasukan Angka ";
        cin >> angka;
        if(i==1){
            max = angka;
        }
        else if (max < angka){
            max = angka;
        }
    }

    cout <<"\nAngka terbesar adalah "<< max <<endl;
    cout <<"=============================================="<<endl;

}


void minimal(){
    int angka, jumlah, min ;
    cout <<"\n===== Program Pencari Nilai Minimal =====";
    cout << "\nBerapa banyak angka yang ingin di komparasi ?";
    cout <<endl;
    cin >> jumlah;
    for (int i=1; i<=jumlah; i++){
        cout <<"\nMasukan Angka ";
        cin >> angka;
        if(i==1){
            min = angka;
        }
        else if (min > angka){
            min = angka;
        }
    }

    cout <<"\nAngka terkecil adalah "<< min <<endl;
    cout <<"=============================================="<<endl;

}

void conver (){

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
        cout <<"=============================================="<<endl;
}

int main() {
 int pil; bool stop;
 stop = false ;
 while(!stop){
  cout << "Menu " << endl;
  cout << "1. Maximal " << endl;
  cout << "2. Minimal " << endl;
  cout << "3. Conversi " << endl;
  cout << "4. Exit " <<endl;
  cout << "pilih menu "; cin>> pil;
  switch(pil){
   case 1: maximal();break;
   case 2: minimal(); break;
   case 3: conver(); break;
   case 4: stop=true; break;
  }
 }
}
