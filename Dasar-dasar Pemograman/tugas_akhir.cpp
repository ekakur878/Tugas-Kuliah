#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;

string NilaiHuruf(int nilai){
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

struct Mata_Kuliah{
    		float kode;
    		string mata_kuliah;
    		int sks;
		};
struct peserta{
	int NBI;
	string nama;
	int nilai;
	string nilaiHuruf;
};

		
void fibo(int n){
	int f1=0, f2=1, b=0, hasil=0;
	cout << f1 << "+" << f2 << "+";
			b=f1+f2;
			while(b<=n){
				cout << b;
				f1=f2;
				f2=b;
				b=f1+f2;
				if(b<n-1){
					cout << "+";
				}
				hasil = hasil +b;
			}
			cout << "=" << hasil;
}
void ganjil(int n){
	int hasil=0;
	for(int i=1; i<=n; i++){
				if(i%2==1){
				cout<<i;
				if(i<n-1)
				{
					cout <<"+";
				}
				hasil=hasil+i;
			}
		}
			cout << "= " << hasil;
}


int main()
{
  char pilih;
  char ulang;
  char karakter;
  int a[10], f, i;
  int b, c, D;
  float x1, x2;
  do
  {
  	system("cls");
    cout << "\t\t\t\t\t##  Menu pilihan :   ##" << endl;
    cout << "\t\t\t\t\t==============================" << endl;
    cout << "\t\t\t\t\t1. Konversi Data" << endl;
    cout << "\t\t\t\t\t2. Menyusun Deret Bilangan" << endl;
    cout << "\t\t\t\t\t3. Mencari akar bilangan " << endl;
    cout << "\t\t\t\t\t4. Menampilkan nilai akhir per mahasiswa" << endl;
    cout << "\t\t\t\t\t5. selesai" << endl;
    cout<<  "\t\t\t\t\t Pilih Menu : ";
		cin>>pilih;
		cout<<endl;
		
    switch(pilih){
    case '1':
    	system("cls");
        cout<<"\n\n\t\t\t\t\t 1. Bilangan Integer ke kode ASCII.\n";
		cout<<"\t\t\t\t\t 2. Kode ASCII ke Bilangan Integer.\n";
		cout<<"\t\t\t\t\t 3. Bilangan Desimal ke Biner, Oktal, Heksadesimal.\n";
		cout<<"\t\t\t\t\t 4. Bilangan Hexadesimal ke Biner, Oktal, Desimal.\n";
		cout<<"\n\t\t\t\t\t pilih nomer : ";
	    cin>>pilih;
		cout<<endl;
		awal:
			if(pilih=='1'){
		system("cls");
 		printf("\n\n\t\t\t\t\t Masukkan Bilangan Integer : ");
   		scanf("%d", &f);
    	printf("\t\t\t\t\t Maka Kode ASCII nya : %c.\n", f, f);
		}
	
			else if(pilih=='2'){
		system("cls");
		cout<<"\n\n\t\t\t\t\t Sebaliknya kode ASCII : ";
		cin>>karakter;
		cout<<"\t\t\t\t\t nilai Integernya : "<<int(karakter)<<endl;
			}
				
			else if(pilih=='3'){
		system("cls");
		cout<<"\n\n\t\t\t\t\t Desimal ke Biner";
		cout<<"\n\t\t\t\t\t Masukkan Nilai Desimal : ";
		cin>>f;
		
			for(i=0; f>0; i++){
				a[i] = f%2;
				f = f/2;
			}

		cout<<"\t\t\t\t\t Biner : ";
		
			for(i=i-1; i>=0; i--){
				cout<<a[i];
			}
	

	
		cout<<"\n\n\t\t\t\t\t Desimal ke Oktal";
		cout<<"\n\t\t\t\t\t Masukkan Nilai Desimal : ";
		cin>>f;
			
			for(i=0; f>0; i++){
				a[i]=f%8;                          
				f=f/8;                                                  
			}
		
        cout<<"\t\t\t\t\t Oktal : ";
		                            
			for (i=i-1; i>=0; i--){
				cout<<a[i];         
			}


		cout<<"\n\n\t\t\t\t\t Desimal ke Heksa";
		printf("\n\t\t\t\t\t Masukkan Bilangan Desimal : ");
		scanf("%d",&f);
		printf("\t\t\t\t\t Heksa : %x",f);
 				}
 				
//=============================================================================================================================
 		
 		
		else if(pilih=='4'){
		system("cls"); 	
		cout<<"\n\n\t\t\t\t\t Heksa ke Biner\n";
		printf("\t\t\t\t\t Masukkan bilangan Heksa : ");
		scanf("%x",&f);
			
			for(i=0; f>0; i++){
				a[i] = f%2;
				f = f/2;
				}
		
		printf("\t\t\t\t\t Biner : ");
		
			for(i=i-1 ;i>=0 ;i--) {
				printf("%d",a[i]);
			}
	 	
	 	
	 	
	 	cout<<"\n\n\t\t\t\t\t Heksa ke Oktal\n";	
		printf("\t\t\t\t\t Masukkan bilangan Heksa : ");
		scanf("%x",&f); 
	 	printf("\t\t\t\t\t Oktal : %o",f);
	
	
	
	 	cout<<"\n\n\t\t\t\t\t Heksa ke Desimal\n";	
		printf("\t\t\t\t\t Masukkan bilangan Heksa : ");
		scanf("%x",&f);
	 	printf("\t\t\t\t\t Desimal : %d",f);
			}
			
		cout<<"\n\n\t\t\t\t\t Ingin Mengulang (y/t) ? ";
		cin>>ulang;
		
			system("cls");
			if(ulang=='Y'||ulang=='y'){
        	goto awal;
    		}
    		if(ulang=='T'||ulang=='t'){
        		goto akhir;
    			}
   			 akhir:
   	 	cout<<"\n\n\n\t\t\t\t\t\t Kembali ke menu utama.";
							
			getch();
			break;
        
    case '2':
    	system("cls");
			int f, berikutnya, bil, hasil;
			
		cout<<"\n\n\t\t\t\t\tMembuat deret bilangan sampai suku : ";
		cin>>f;
		cout<<"\n\n\n1. Deret bilangan ganjil\n";
		ganjil(f);
		cout<<"\n\n2. Deret Bilangan Fibonanci\n";
		fibo(f);	
    	cout<<"\n\n3. Deret Bilangan Prima\n";
    		
    		for(int i = 2; i<=f; i++){
				bil=0;
				for(int j=2;j<i;j++){
					if(i%j==0){
						bil=1;
					}
				}
				if(bil==0){
					cout<<i<<" + ";
					hasil=hasil+i;
				}
			}
			cout << "\b\b= " << hasil;
			getch();
			break;
        
    case '3':
    	system("cls");
        cout<<"\n\n\t\t\t\t\t\tMasukan nilai a : ";
		cin>>f;
		cout<<"\t\t\t\t\t\tMasukan nilai b : ";
		cin>>b;
		cout<<"\t\t\t\t\t\tMasukan nilai c : ";
		cin>>c;
		
		if(f==0){
			
	      	cout<<"\n\t\t\t\t\t\tBukan Persamaan Kuadrat"<<endl;
		}
		
		else{
				D=(b*b)-(4*f*c);
			if (D>=0){
				x1 = (-b + sqrt(D)) / (2.0*f);
		      	x2 = (-b - sqrt(D)) / (2.0*f);
				  
				cout<<"\n\t\t\t\t\t\tHasilnya X1 = "<<x1<<endl;
				cout<<"           \t\t\t\t\t\t X2 = "<<x2<<endl;	
			}else{
				double im=sqrt(abs(D))/(2*f);
				double r=b/2*f;
		      	
				cout<<"\n\t\t\t\t\t\tHasilnya X1 = "<<r<<"+"<<im<<"i"<<endl;
				cout<<"           \t\t\t\t\t\t X2 = "<<r<<"-"<<im<<"i"<<endl;
			}
		}
			getch();
			break;
    case '4':
	{
		float cari;
        int position;
        char loop;

          Mata_Kuliah List_Pelajaran[5];

          List_Pelajaran[0].kode = 1234;
          List_Pelajaran[0].mata_kuliah = "Daspro";
          List_Pelajaran[0].sks = 3;

          List_Pelajaran[1].kode = 2341;
          List_Pelajaran[1].mata_kuliah = "sisdig";
          List_Pelajaran[1].sks = 2;

          List_Pelajaran[2].kode = 4321;
          List_Pelajaran[2].mata_kuliah = "mtk";
          List_Pelajaran[2].sks = 1;

          peserta daspro[5];
          daspro[0].NBI = 1460213;
          daspro[0].nama = "eka";
          daspro[0].nilai = 100;
          daspro[0].nilaiHuruf = NilaiHuruf(daspro[0].nilai);
          
          daspro[1].NBI = 1460233;
          daspro[1].nama = "sada";
          daspro[1].nilai = 89;
          daspro[1].nilaiHuruf = NilaiHuruf(daspro[1].nilai);
          
          peserta sisdig[5];
          
          sisdig[0].NBI = 2797;
          sisdig[0].nama = "joko";
          sisdig[0].nilai = 67;
          sisdig[0].nilaiHuruf = NilaiHuruf(sisdig[0].nilai);
          
          sisdig[1].NBI = 7698;
          sisdig[1].nama = "tels";
          sisdig[1].nilai = 76;
          sisdig[1].nilaiHuruf = NilaiHuruf(sisdig[1].nilai);
          
          peserta mtk[5];
          
          mtk[0].NBI = 9786;
          mtk[0].nama = "fel";
          mtk[0].nilai = 87;
          mtk[0].nilaiHuruf = NilaiHuruf(mtk[0].nilai);
          
          mtk[1].NBI = 146087;
          mtk[1].nama = "tew";
          mtk[1].nilai = 85;
          mtk[1].nilaiHuruf = NilaiHuruf(mtk[1].nilai);
		system("cls");
          cout << "code \t\t=\t";
          cin >> cari;
          for (int i = 0; i < 5; i++){
            if (List_Pelajaran[i].kode == cari)
            {
			position = i;
			cout << "Mata Kuliah \t=\t" << List_Pelajaran[position].mata_kuliah <<endl;
			cout << "SKS \t\t=\t" << List_Pelajaran[position].sks <<endl;
			cout << "=======================================================================================================" <<endl;
			cout <<
				setw(5) << "NIM" <<
				setw(25) << "NAMA" <<
				setw(25) << "NILAI" <<
				setw(25) << "HURUF" << '\n';
			cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

              if (position == 0)
              {
                for (int i = 0; i <= 1; i++)
                {
                  cout << 
				  setw(5) << daspro[i].NBI <<
                  setw(25) << daspro[i].nama <<
                  setw(25) << daspro[i].nilai <<
                  setw(25) << daspro[i].nilaiHuruf <<endl;
                }
                
              }
              else if (position == 1)
              {
                for (int i = 0; i <= 1; i++)
                {
                  cout << 
				  setw(5) <<sisdig[i].NBI <<
                  setw(25) << sisdig[i].nama <<
                  setw(25) << sisdig[i].nilai <<
                  setw(25) << sisdig[i].nilaiHuruf <<endl;
                }
                
              }
              else if (position == 2)
              {
                for (int i = 0; i <= 1; i++)
                {
                  cout <<
				  setw(5) << mtk[i].NBI <<
                  setw(25) << mtk[i].nama <<
                  setw(25) << mtk[i].nilai <<
                  setw(25) << mtk[i].nilaiHuruf <<endl;
                }
                
              }
			}
		}
	}
        getch();
        break;
    case '5':
    	system("cls");
        cout << "\t\tAnda memilih selesai" << endl;
        getch();
        break;
    default:
    	system("cls");
        cout << "\t\tMenu tidak tersedia" << endl;
        getch();
    }
    cout << endl;
  }
  while(pilih !='5');
			cout<<endl;
			cout<<"\t\tTERIMAKASIH";
	 
		return 0;
}
