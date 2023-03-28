#ifndef TA_H
#define TA_H
#define cout std::cout
#define cin std::cin
#define string std::string
#define setw std::setw
#define endl std::endl

// Membuat function deret angka dengan nama "deret"
void ganjil(int n){
	int hasil=0;
	for(int i=1; i<=n; i++){
				if(i%2==1){
				cout << i;
				if(i<n-1)
				{
					cout <<" + ";
				}
				hasil=hasil+i;
			}
		}
			cout << " = " << hasil;
}

void fibo(int n) {
   int f1=0, f2=1, f=0;
   int total=0;
   cout << f1 << " + " << f2 << " + ";
    f = f1 + f2;
    while(f <= n) {
        cout << f ;
        f1 = f2;
        f2 = f;
        f = f1 + f2;
        if (f<n-1) 
			{
				cout << " + ";
			}
        total = total + f;
    }
    cout << " = " << total;
}

void prima(int n){
    int total = 0;
     for (int a = 1; a<=n; a++){
        int cek = 0;
        for (int b = 1; b <= a; b++){
            if (a % b == 0){
            cek = cek + 1;
            }
        }
            if (cek == 2){
                cout << a;
                if (cek < n) 
                {
                    cout << " + ";
                }
                total = total + a;
            }

        }

    cout << "\b\b = " << total;
}

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

struct Pelajaran {
    float kode;
    string Mata_Kuliah;
    int SKS;
};
struct Mhs {
        int no;
        string nim;
        string nama;
        int nilai;
        string huruf;
    };
void gotoxy(short a, short b)           //Introduction of gotoxy function//                                               
{
    COORD pos ={a,b};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void TableMhs(){
	float search;
	int xy=5;
	int found, position;
	char loop;
	
	Pelajaran y[10];
		y[0].kode = 14620043;
		y[0].Mata_Kuliah = "Sistem Digital";
		y[0].SKS = 2;

		y[1].kode = 14620053;
		y[1].Mata_Kuliah = "Sistem Operasi";
		y[1].SKS = 3;

		y[2].kode = 14620034;
		y[2].Mata_Kuliah = "Dasar - Dasar Pemograman";
		y[2].SKS = 3;
		
	Mhs daspro[5];
		daspro[0].no =1;
		daspro[0].nim ="1462200171";
		daspro[0].nama ="Eka Kurniawan A.K";
		daspro[0].nilai =100;
		daspro[0].huruf = NilaiHuruf(daspro[0].nilai);
		
		daspro[1].no =2;
		daspro[1].nim ="1462200822";
		daspro[1].nama ="Setyawan Ibrahim";
		daspro[1].nilai =65;
		daspro[1].huruf = NilaiHuruf(daspro[1].nilai);
		
		daspro[2].no =3;
		daspro[2].nim ="1462200712";
		daspro[2].nama ="Maulana Malik";
		daspro[2].nilai =55;
		daspro[2].huruf = NilaiHuruf(daspro[2].nilai);
		
		daspro[3].no =4;
		daspro[3].nim ="1462200165";
		daspro[3].nama ="Wulan Anjarwati";
		daspro[3].nilai =75;
		daspro[3].huruf = NilaiHuruf(daspro[3].nilai);
		
		daspro[4].no =5;
		daspro[4].nim ="1462200122";
		daspro[4].nama ="Adi Susanto";
		daspro[4].nilai =80;
		daspro[4].huruf = NilaiHuruf(daspro[4].nilai);

	Mhs Sisdig[5];
		Sisdig[0].no =1;
		Sisdig[0].nim ="1462200171";
		Sisdig[0].nama ="Eka Kurniawan A.K";
		Sisdig[0].nilai =100;
		Sisdig[0].huruf = NilaiHuruf(Sisdig[0].nilai);
		
		Sisdig[1].no =2;
		Sisdig[1].nim ="1462204567";
		Sisdig[1].nama ="Siti Isna";
		Sisdig[1].nilai = 80;
		Sisdig[1].huruf = NilaiHuruf(Sisdig[1].nilai);
		
		Sisdig[2].no =3;
		Sisdig[2].nim ="1462202568";
		Sisdig[2].nama ="Malik Maulana";
		Sisdig[2].nilai =70;
		Sisdig[2].huruf = NilaiHuruf(Sisdig[2].nilai);
		
		Sisdig[3].no =4;
		Sisdig[3].nim ="1462209803";
		Sisdig[3].nama ="Anjarwati Wulan";
		Sisdig[3].nilai =75;
		Sisdig[3].huruf = NilaiHuruf(Sisdig[3].nilai);
		
		Sisdig[4].no =5;
		Sisdig[4].nim ="1462209027";
		Sisdig[4].nama ="Susanto Adi";
		Sisdig[4].nilai =100;
		Sisdig[4].huruf = NilaiHuruf(Sisdig[4].nilai);
	
	Mhs sisop[5];
		sisop[0].no =1;
		sisop[0].nim ="1462200171";
		sisop[0].nama ="Eka Kurniawan A.K";
		sisop[0].nilai =100;
		sisop[0].huruf = NilaiHuruf(sisop[0].nilai);
		
		sisop[1].no =2;
		sisop[1].nim ="1462204567";
		sisop[1].nama ="Siti Hajah";
		sisop[1].nilai = 80;
		sisop[1].huruf = NilaiHuruf(sisop[1].nilai);
		
		sisop[2].no =3;
		sisop[2].nim ="1462202568";
		sisop[2].nama ="Joko Tingkir";
		sisop[2].nilai =70;
		sisop[2].huruf = NilaiHuruf(sisop[2].nilai);
		do{
			system("cls");
			cout << "Input Code \t:\t";cin>>search; 

			bool found = false;
			for (int i=0;i<=5; ++i)
			{
				if (y[i].kode == search)
				{
					position = i;
					cout  << "Mata Kuliah \t:\t" << y[position].Mata_Kuliah<<endl
							<< "SKS \t\t:\t"<<y[position].SKS << endl;
					cout<<"========================================================================================================="<<endl;
					cout << 
						setw(5) << "No" <<
						setw(25) << "NIM" <<
						setw(25) << "NAMA" <<
						setw(25) << "NILAI" <<
						setw(25) << "HURUF" << '\n';
					cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
					if (position == 0)
					{
						for (int i = 0; i < 5 ; i++){
						cout<<
							setw(5)<<Sisdig[i].no<<
							setw(25)<<Sisdig[i].nim<<
							setw(25)<<Sisdig[i].nama<<
							setw(25)<<Sisdig[i].nilai<<
							setw(25)<<Sisdig[i].huruf<<endl;    
						}
					} else if (position == 1){
						for (int i = 0; i < 3 ; i++){
						cout<<
							setw(5)<<sisop[i].no<<
							setw(25)<<sisop[i].nim<<
							setw(25)<<sisop[i].nama<<
							setw(25)<<sisop[i].nilai<<
							setw(25)<<sisop[i].huruf<<endl;    
						}
					} else if (position == 2){
						for (int i = 0; i < 5 ; i++){
						cout<<
							setw(5)<<daspro[i].no<<
							setw(25)<<daspro[i].nim<<
							setw(25)<<daspro[i].nama<<
							setw(25)<<daspro[i].nilai<<
							setw(25)<<daspro[i].huruf<<endl;    
						}
					}
				found = true;
				break;	
				} 
			}	
			if (!found)
			{
				cout<<"Kode tidak ditemukan ..";
			}
			
                        cout<<"\nMemulai program lagi ? (y/t) "; loop=getche();
                        }while(loop!='t');
                        
}

void abc()
{
	int a, b, c, d;
	double x1, x2, in, r;
	char loop;

	do{
		system("cls");
		gotoxy(55,5); cout << "Perhitungan dengan Rumus ABC" << endl;
		gotoxy(50,8); cout << "Masukan Nilai A : \t";
		cin>>a;
		gotoxy(58,9); cout << "Nilai B : \t";
		cin>>b;
		gotoxy(58,10); cout << "Nilai C : \t";
		cin>>c;
		if(a==0){
			gotoxy(58,12); cout << "Hasilnya : Bukan Persamaan Kuadrat"; 
		}
		else{
			d= (b*b)-(4*a*c);

			if (d>=0){
				x1 = (-b + sqrt(d)) / (2*a);
				x2 = (-b - sqrt(d)) / (2*a);

				gotoxy(50,12); cout << "Hasinya X1 : \t"<< x1 ;
				gotoxy(58,13); cout <<"X2 : \t"<< x2 ;
			}
			else {
				in = sqrt(abs(d))/(2*a);
				r = -b/2.0*a;

				gotoxy(50,12); cout << "Hasinya X1 : \t"<< r << "+" << in <<"i";
				gotoxy(58,13); cout <<"X2 : \t"<< r << "-" << in <<"i" ;
			}
		}
			cout << endl;
			gotoxy(55,15);cout << "Perhitungan Matematik";
			if(a==0){
				gotoxy(50,16);cout << "Hasil B/A + sqrt(C) = Tidak bisa di bagi nol [0]" ;
			}
			else{
				if (c<0) {
					gotoxy(50,16);cout << "Hasil B/A + sqrt(C) = " << (b/a) << " + " << sqrt(abs(c)) << "i";
				}
				else {
					gotoxy(50,16);cout << "Hasil B/A + sqrt(C) = " << (b/a+sqrt(c));
				}
			}
			gotoxy(50,18); cout<<"Memulai program lagi ? (y/t) "; loop=getch();
		}while(loop!='t');
}

#endif
