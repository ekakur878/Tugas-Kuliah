//Nama		: Eka Kurniawan Agustyas Komstyadi
//NBI		: 1462200176
//Program	: Perkalian matriks dan jumlah deret bil. asli dengan rekursi

#include<iostream>
#include<conio.h>
using namespace std;

int balok(int r){
	return r*r*r;
}

int terbesar(int x){
	int arr[x];
	int max;
	cout<<"Masukkan bilangan \n";
	for (int i=0;i<x;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(int j=1;j<x;j++){
		if(max<arr[j])max=arr[j];
	}
	return max;
}

string konvers(int nilai){
	string huruf;
	if (nilai>80&&nilai<=100)huruf+="A";
	else if (nilai>70)huruf+="B";
	else if (nilai>=60)huruf+="C";
	else if (nilai<60)huruf+="D";
	return huruf;
}

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

int deret(int a){
	int b=a;
	if(a!=0){cout<<b-(a-1)<<" + ";
		return a + deret(a-1);
	}
	else { cout<<" = ";
	return 0;
	}
}

void menuDeret(){
	int a;
	cout<<"\nProgram Deret bilangan asli\n";
	cout<<"Masukkan jumlah deret yang diinginkan\n";
	cin>>a;
	cout<<"Hasilnya adalah = "<<deret(a);
	getch();
}

void komen(string x){
	cout<<x;
}

void menu(){
	char pilih;
	do {
		system("cls");
		cout << "\t\t\tProgram Latihan\n\n";
		cout << "\t\t1. Volume Balok \n";
		cout << "\t\t2. Nilai Terbesar \n";
		cout << "\t\t3. Konversi Nilai \n";
		cout << "\t\t4. Perkalian Matriks \n";
		cout << "\t\t0. Keluar\n";
		cout << "\t\tPilihan anda ? \n\n";
		pilih=getch();
		switch(pilih){
			case 48:
				exit(0);
				break;
			case 49:
				{
				int r;
				cout<<"\n\t\tMasukkan sisi balok = ";
				cin>>r;
				cout<<"\n\t\tVolume balok adalah = "<<balok(r);
				getch();
				break;
				}
			case 50:
				{
				int x;
				cout<<"\nMasukkan berapa bilangan yang ingin dikomparasi \n";
				cin>>x;
				cout<<"\nYang terbesar adalah = "<<terbesar(x)<<endl;
				getch();
				break;
				}
			case 51:
				{
				int x;
				 cout<<"\n\t\tMasukkan nilai anda = \n";
				 cin>>x;
				 cout<<"\t\tNilai anda adalah = "<<konvers(x)<<endl;
				 getch();
				 break;
				}
			case 52:
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
		}
	} while(pilih!=48);
}

int main (){
	menu();
 return 0;
}

