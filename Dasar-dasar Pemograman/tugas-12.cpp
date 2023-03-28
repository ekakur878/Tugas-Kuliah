// Nama		: Eka Kurniawan Agustyas Komstyadi
// NBI		: 1462200171
// Pemograman Perkalian Matriks


#include <iostream>
using namespace std;

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

int main(){
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
    
	// return 0;
}