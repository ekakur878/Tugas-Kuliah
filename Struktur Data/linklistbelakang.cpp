//#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct simpul
{
  char nama[20];
  
  simpul *next;
};
simpul *awal;
void tambah_depan();
void tambah_belakang();
void tampil();


int main()
{
  awal=NULL;
  int pil=1;
  while(pil!=5)
  {
     system("cls");
     cout<<"1.Tambah Depan\n";
     cout<<"2.Tambah Belakang\n";
     cout<<"3.Tampil Isi Link List\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah_depan();
     else if(pil==2)
         tambah_belakang();
     else if(pil==3)
         tampil();
     else pil=5;
  }

}


void tambah_depan()
{
 int i;
 char dat[20];
 simpul *baru;
 baru=new simpul;
 cout<<" Masukkan Nama :";
 cin>>dat;
 strcpy(baru->nama,dat);
 baru->next=NULL;
  if (awal==NULL)
     awal=baru;
  else
  {
     baru->next=awal;
    awal=baru;
  }
}

void tambah_belakang()
{
 int i;
 char dat[20];
 simpul *baru,*posisi;
 baru=new simpul;
 cout<<" Masukkan Nama :";
 cin>>dat;
 strcpy(baru->nama,dat);
 baru->next=NULL;
  if (awal==NULL)
     awal=baru;
  else
  {
     posisi=awal;
     while(posisi->next!=NULL) posisi=posisi->next;
     posisi->next=baru;
  }
}

void tampil()
{
   simpul *baru;
   baru=awal;
   while(baru!=NULL)
   {
     cout<<baru->nama<<"  ";
     baru=baru->next;
   }
   getch();
}




