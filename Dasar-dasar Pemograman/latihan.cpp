// NAMA  : EKA KURNIAWAN AGUSTYAS KOMSTYADI
// NBI   : 1462200171
// KELAS : DASAR PEMOGRAMAN (R)


#include <iostream>
#include <conio.h>

using namespace std;

double vol(float x){
    return x*x*x;
}

void komen( string x){
    cout<<"\n\t\t"<<x; getch();
}

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

int main(){
    int i=5; 
    int pilih=0;

    do
    {
        system("cls");

        cout <<"\n\t\t\tMenu : \n";
		cout <<"\t\t1. Valume Kubus \n";	
		cout <<"\t\t2. Nilai Terbesar \n";
		cout <<"\t\t3. Konversi Nilai \n";
		cout <<"\t\t4. Perkalian Matrik \n";
        cout <<"\t\t5. Keluar \n\n ";
		cout << "\t\tPilihan anda ? ";
        cin>>pilih;

	        switch (pilih){
	    	case 1:
                    system("cls");
                    int sisi;
                    cout <<"Program Mencari Volume Kubus\n";
                    cout <<"Masukan Sisi = ";cin>>sisi;
                    cout <<"Volume Kubus = "<< vol(sisi);

                    getch();
                        break;              
	    	case 2:
	    		system("cls");
                    maximal();
                    getch();
                        break;

	    	case 3:
	    		    system("cls");
                        conver();
                        getch();
                        break;
	    	case 4:
	    		system("cls");
                matriks();
                getch();
	    		break;

            case 5:
                cout <<"Terima Kasih";
                break;
	    	default:
	    		komen(" DI ANGGER AE LEK MILIH ");	
		}
		
		// if (pilih>0 and pilih<5){
		// 	cout << "\n\nTekan sembarang untuk melanjutkan";
		// 	getch(); //utk menunda tampilan, menunggu tekan sembarang
		// }
        //        if (pilih == 55){
        // 	        cout <<"\nTerima kasih yaa..."; //hanya jika keluar
		// }       	    

    } while (pilih !=5);
     return 0;
}
