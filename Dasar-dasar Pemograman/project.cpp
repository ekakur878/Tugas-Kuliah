#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <bitset>
#include <string.h>
#include <math.h>
#include <iomanip>
#include <windows.h>
#include "ta.cpp"
using namespace std;

int main()
{
    char menu;
    do
    {
        system("cls");
        gotoxy(55,5); cout << "Menu Pilihan : ";
        gotoxy(50,7); cout << "1. Konversi Data ";
        gotoxy(50,8); cout << "2. Menyusun Deret Bilangan ";
        gotoxy(50,9); cout << "3. Mencari Akar Persamaan Kuadrat ";
        gotoxy(50,10); cout << "4. Menampilkan Nilai Akhir per Mahasiswa ";
        gotoxy(50,11); cout << "5. Keluar ";
        gotoxy(50,13); cout << "Pilihan anda ? "; menu=getch();
        
        switch(menu){
            case '1':{

                system("cls");
                int kode, dcNum;
                int des;
                char ascii;

                gotoxy(55,5); cout << "Menu Konversi Data";
                gotoxy(50,8); cout << "Masukan Bilangan Integer \t"; 
                scanf("%d", &kode);
                gotoxy(50,9); printf("Maka Bilangan ASCII \t\t%c",kode);
                gotoxy(50,10); cout << "Masukan Bilangan ASCII \t"; 
                cin >> ascii;
                gotoxy(50,11); cout << "Maka Bilangan Integer \t" <<int(ascii);
                gotoxy(50,12); cout << "Masukan Nilai Desimal \t"; 
                cin >> des;
                gotoxy(50,13); cout << "Nilai Biner, Octal, Heksa \t"
                     << bitset<12>(des) << ", " << oct << des << ", " << hex << des;
                gotoxy(50,14); cout << "Masukan Nilai Heksa \t\t"; 
                cin >> hex >> dcNum >> dec;
                gotoxy(50,15); cout << "Nilai Biner, Octal, Decimal \t"
                     << bitset<12>(dcNum) << ", " << oct << dcNum << ", " << dec << dcNum;
            }
                getch();
                break;

            case '2': {
                
                system("cls");
                int a;

                gotoxy(55,5); cout << "Masukan Suku Deret Bilangan = "; cin>>a;
                gotoxy(50,7); cout << "1. Deret Bilangan Ganjil";
                gotoxy(55,8); ganjil(a);
                gotoxy(50,10); cout << "2. Deret Bilangan Fibonanchi";
                gotoxy(55,11); fibo(a);
                gotoxy(50,13); cout << "3. Deret Bilangan Prima"<<endl;
                gotoxy(55,14); prima(a);
            }
                getch();
                break;
        
            case '3':{
               
                system("cls");
                abc();
            }
                getch();
                break;  

            case '4':{
                                                                        
                system("cls");
                TableMhs();
            }
                getch();
                    break;
                
            case '5':
        
                system("cls");
                exit(0);
                break;

            default:
                system("cls");
                cout << "\n\t\t\t\tMenu Yang Anda Pilih Tidak Ada"<<endl;
                menu=getch();
                break;
            }
    }
    while (menu != '5');
    

}