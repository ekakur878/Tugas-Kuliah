//Nama		: Eka Kurniawan Agustyas Komstyadi
//NBI		: 1462200176
//Program	: Perkalian matriks dan jumlah deret bil. asli dengan rekursi

#include "tugasETS.h"
#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
using std::setw;

string mengubahNilaiKeHuruf(int nilai){
                    string hasil; 
                            if(nilai >= 85 && nilai <= 100){
                            hasil = "A";
                            }
                            else if(nilai >= 80 && nilai <= 84.99) {
                                hasil = "A-";
                            }
                            else if(nilai >= 75 && nilai <= 79.99) {
                                hasil = "AB";
                            }
                            else if(nilai >= 70 && nilai <= 74.99) {
                                hasil = "B+";
                            }
                            else if(nilai >= 65 && nilai <= 69.99) {
                                hasil = "B";
                            }
                            else if(nilai >= 60 && nilai <= 64.99) {
                                hasil = "B-";
                            }
                            else if(nilai >= 55 && nilai <= 59.99) {
                                hasil = "BC";
                            }
                            else if(nilai >= 50 && nilai <= 54.99) {
                                hasil = "C+";
                            }
                            else if(nilai >= 45 && nilai <= 49.99){
                                hasil = "C";	
                            }
                            else if(nilai >= 40 && nilai <= 44.99){
                                hasil = "C-";
                            }
                            else if(nilai >= 35 && nilai <= 39.99){
                                hasil = "CD";
                            }
                            else if(nilai >= 30 && nilai <= 34.99){
                                hasil = "D";
                            }
                            else if(nilai >= 0 && nilai <= 29.99){
                                hasil = "E";
                            }
                            return hasil;
                }

                struct mhs{
                    int i;
                    int no;
                    string nim;
                    string nama;
                    int nilai;
                    string huruf;
                };
				
void print(int C[10][10],int r,int c){
	   for (int i=0;i<r;i++){	
    	       for (int j=0;j<c;j++){ //loop didalam loop
    		        cout<<C[i][j]<<" ";
		} cout<<endl;
	} cout<<endl;
}

void kali(int A[10][10],int B[10][10],int r1,int c1,int r2,int c2){
	int C[10][10];
	for (int i=0;i<r1;i++){
    	for (int j=0;j<c2;j++){ //loop didalam loop
    		C[i][j]=0;
    		for (int k=0;k<c2;k++){
    			 C[i][j]+=A[i][k] * B[k][j]; //operasi perkalian matrik 3D
			} cout<<C[i][j]<<" ";
		} cout<<endl;
	}
}

void matriks(){
	int A[10][10],B[10][10],r1,c1,r2,c2;
	system("cls");
	// data matrik di-entry satu-satu
	do{
		cout<<"\nMasukkan jumlah baris lalu kolom matriks pertama\n";
		cin>>r1>>c1;
		cout<<"\nMasukkan jumlah baris lalu kolom matriks kedua\n";
		cin>>r2>>c2;
		if(r1!=c2)cout<<"\nBaris matriks pertama dan kolom matriks kedua harus sama\n";
	} while (r1!=c2);
	cout<<"\nMasukkan isi matriks pertama\n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>A[i][j];
		}
	}
	cout<<"\nMasukkan isi matriks kedua\n";
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>B[i][j];
		}
	}
	cout<<"Matriks A = \n";print(A,r1,c1);
	cout<<"Matriks B = \n";print(B,r2,c2);
	cout<<"\nMatriks A dikali Matriks B = \n";kali(A,B,r1,c1,r2,c2);
    
}


void komen(string x){
	cout<<x;
}

void menu(){
	char pilih;
	do {
		system("cls");
		cout << "\t\t\tMenu Pilihan : \n";
		cout << "\n\t\t1. Konversi Data \n";
		cout << "\t\t2. Menyusun Deret Bilangan \n";
		cout << "\t\t3. Mencari Akar Persamaan Kuadrat \n";
		cout << "\t\t4. Menampilkan Nilai Akhir per Mahasiswa \n";
		cout << "\t\t5. Keluar\n";
		cout << "\t\tPilihan anda ? \n\n";
		pilih=getch();
		switch(pilih){
			case 1:
				{

                    mhs daftarMahasiswa[5];
                    daftarMahasiswa[0].no =1;
                    daftarMahasiswa[0].nim ="1462200171";
                    daftarMahasiswa[0].nama ="Eka Kurniawan A.K";
                    daftarMahasiswa[0].nilai =100;
                    daftarMahasiswa[0].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[0].nilai);
                    
                    daftarMahasiswa[1].no =2;
                    daftarMahasiswa[1].nim ="1462200822";
                    daftarMahasiswa[1].nama ="Setyawan Ibrahim";
                    daftarMahasiswa[1].nilai =65;
                    daftarMahasiswa[1].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[1].nilai);
                    
                    daftarMahasiswa[2].no =3;
                    daftarMahasiswa[2].nim ="1462200712";
                    daftarMahasiswa[2].nama ="Maulana Malik";
                    daftarMahasiswa[2].nilai =55;
                    daftarMahasiswa[2].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[2].nilai);
                    
                    daftarMahasiswa[3].no =4;
                    daftarMahasiswa[3].nim ="1462200165";
                    daftarMahasiswa[3].nama ="Wulan Anjarwati";
                    daftarMahasiswa[3].nilai =75;
                    daftarMahasiswa[3].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[3].nilai);
                    
                    daftarMahasiswa[4].no =5;
                    daftarMahasiswa[4].nim ="1462200122";
                    daftarMahasiswa[4].nama ="Adi Susanto";
                    daftarMahasiswa[4].nilai =80;
                    daftarMahasiswa[4].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[4].nilai);
                        cout<<"========================================================================================================="<<endl;
                        cout << 
                            setw(5) << "No" <<
                            setw(25) << "NIM" <<
                            setw(25) << "NAMA" <<
                            setw(25) << "NILAI" <<
                            setw(25) << "HURUF" << '\n';
                        cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
                        for (int i = 0; i <5 ; i++){
                            cout<<
                                setw(5)<<daftarMahasiswa[i].no<<
                                setw(25)<<daftarMahasiswa[i].nim<<
                                setw(25)<<daftarMahasiswa[i].nama<<
                                setw(25)<<daftarMahasiswa[i].nilai<<
                                setw(25)<<daftarMahasiswa[i].huruf<<endl;
                    }
				getch();
				break;
				}
			case 2:
				{
				int i, n, j=0;
                cout <<"===================================================\n";
                cout<<"\tProgram Deret Suku Program Konvensional\n";
                cout <<"===================================================\n\n";
                cout<<"\nMasukan Jumlah Suku Deret yang di inginkan : "; cin>>n;
                cout<<endl;
                cout<<"Suku Deret"<<endl;
                   for (i = 1; i <= n; i++){
                    
                    cout << fibo(j);
                    if(i <= n-1){ 
                        cout<<" + ";
                    }else {
                        cout<<'.';
                        cout<<endl; 
                    }
                    j++;
                }
				getch();
				break;
				}
			case 3:
				{
                  int n, i, j = 0;
                cout <<"===================================================\n";
                cout <<"\t\tProgram Recrusive Suku Deret\n";
                cout <<"===================================================\n\n";
                cout <<"Masukan Suku ke-N : ";
                cin >> n;
                cout <<"Suku Deret :\n";
                for (i = 1; i <= n; i++){
                    cout << fibo(j);
                    if(i <= n-1){ 
                        cout<<" + ";
                    }else {
                        cout<<'.';
                        cout<<endl; 
                    }
                    j++;
                }
				 getch();
				 break;
				}
			case 4:
				{
				int A[10][10],B[10][10],r1,c1,r2,c2;
	
	    // data matrik di-entry satu-satu
				do{
					cout<<"\nMasukkan jumlah baris lalu kolom matriks pertama\n";
					cin>>r1>>c1;
					cout<<"\nMasukkan jumlah baris lalu kolom matriks kedua\n";
					cin>>r2>>c2;
					if(r1!=c2)cout<<"\nBaris matriks pertama dan kolom matriks kedua harus sama\n";
				} while (r1!=c2);
				cout<<"\nMasukkan isi matriks pertama\n";
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						cin>>A[i][j];
						}
					}
				cout<<"\nMasukkan isi matriks kedua\n";
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						cin>>B[i][j];
					}
				}
				cout<<"Matriks A = \n";print(A,r1,c1);
				cout<<"Matriks B = \n";print(B,r2,c2);
				cout<<"\nMatriks A dikali Matriks B = \n";kali(A,B,r1,c1,r2,c2);
    			getch();
				break;
				}
			default:
				{
				komen("\n\t\tsalah pilih bro");
				getch();
				break;
				}
            case 5:
				exit(0);
				break;
		}
	} while(pilih!=5);
}

int main (){
	menu();
 return 0;
}

