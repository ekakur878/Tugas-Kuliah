#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

char nilai[20];
int i;

struct tableMahasiswa
{
  int no;
  string nama;
  string NBI;
  int nilai;
};

  void createdMhs(tableMahasiswa mhs[]){
    system("cls");
    cout << " Create data baru " <<endl;
    for (int i=0; i<2; i++){
    mhs[i].no = i+1;
    cout << " input nama " ;
    cin >> mhs[i].nama;
    cout << " input NBI " ;
    cin >> mhs[i].NBI;
    cout << " input nilai " ;
    cin >> mhs[i].nilai;
    cout << endl;
    }


  }

  void showTable(tableMahasiswa mhs[]){
          system("cls");
					cout<<"========================================================================================================="<<endl;
					cout << 
						setw(5) << "No" <<
						setw(25) << "NIM" <<
						setw(25) << "NAMA" <<
						setw(25) << "NILAI" << '\n';
					cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
						for (int i = 0; i < 2 ; i++){
						cout<<
							setw(5)<<mhs[i].no<<
							setw(25)<<mhs[i].NBI<<
							setw(25)<<mhs[i].nama<<
							setw(25)<<mhs[i].nilai<<endl;    
						}
  }

void search(tableMahasiswa mhs[])
{
  string sch;
  int position;
  char loop;

  do{
    	system("cls");
      cout<<"Data yang dicari = ";
      cin >> sch;
      cout << endl;
      bool found = false;
      for (int i=0; i<3; i++){
        if (mhs[i].nama==sch){
          position = i;
          cout << " Data NAMA di temukan" << endl;
          found = true;
        }
        else if (mhs[i].NBI==sch){
          position = i;
          cout << " Data NBI di temukan" << endl;
          found = true;
        }
      }

        cout<<"========================================================================================================="<<endl;
					cout << 
						setw(5) << "No" <<
						setw(25) << "NIM" <<
						setw(25) << "NAMA" <<
						setw(25) << "NILAI" << '\n';
					cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
            cout<<
							setw(5)<<mhs[position].no<<
							setw(25)<<mhs[position].NBI<<
							setw(25)<<mhs[position].nama<<
							setw(25)<<mhs[position].nilai<<endl; 

          if (!found)
          {
            cout << setw(50) << "Data yang dicari tidak ditemukan " <<endl;
          }
          
          cout<<"\nMau mencari lagi ? (y/t) "; loop=getche();
      }while(loop!='t');
}

int main(){
  tableMahasiswa mhs[3];
  int pil=1;
  while(pil!=4)
  {
     system("cls");
     cout<<"1.Creat Data \n";
     cout<<"2.Tampil Data\n";
     cout<<"3.Searching Data \n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda = ";
     cin>>pil;
     if(pil==1){
         createdMhs(mhs);
     }
     else if(pil==2){
        showTable(mhs);
        getch();
     }
     else if(pil==3){
        search(mhs);
        getch();
     }
     system("cls");
  }

}