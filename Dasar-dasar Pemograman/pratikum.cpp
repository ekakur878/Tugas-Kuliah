#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct karyawan {
    string nama;
    double gaji;
    int Tahun;
    double Bonus;
};

double BonusGaji(int n, double m){
    double hasil;
    if (n<5)
    {
        hasil=m*0.05;
    } 
    else if (n>5)
    {
        hasil=m*0.1;
    }
    return hasil;
    
}

int main() {
    int JumlahKaryawan;
    system("cls");
    cout << "Masukan Jumlah Karyawan = ";
    cin >>JumlahKaryawan;
    karyawan x[JumlahKaryawan];
    cout << endl;
    for (int i = 0; i < JumlahKaryawan; i++)
    {
       
        cout << "Karyawan ke - " << i+1 <<endl;
        cout << "Nama = ";
        string * nm;
        nm = &x[i].nama;
        cin >> * nm;
        cout << "Gaji = ";
        double * gj;
        gj = &x[i].gaji;
        cin >> * gj;
        cout << "Lama Bekerja = ";
        int * th;
        th = &x[i].Tahun;
        cin >> * th;
        x[i].Bonus = BonusGaji( x[i].Tahun, x[i].gaji);
        cout << endl;
    }
    
    system("cls");
    cout << "\n |" << setw(15) << "NAMA |"
                  << setw(15) << "GAJI |" 
                  << setw(15) << "LAMA BEKERJA |" 
                  << setw(15) << "BONUS |"<< endl;
            cout <<"------------------------------------------------------------\n";
            for (int i = 0; i < 5 ; i++) {
                cout << " |" << setw(12) << x[i].nama << " |";
                cout << setw(12) << x[i].gaji << " |";
                cout << setw(12) << x[i].Tahun << " |";
                cout << setw(12) << x[i].Bonus << " |" << endl;
            }
            cout <<"------------------------------------------------------------\n";
            getch();
}