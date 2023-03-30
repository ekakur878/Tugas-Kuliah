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
void tampil();


int main()
{
  awal=NULL;
  int pil=1;
  while(pil!=5)
  {
  //   clrscr();
     cout<<"1.Tambah Depan\n";
     cout<<"2.Tampil Isi Link List\n";
     cout<<"3.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah_depan();
     else if(pil==2)
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

void tampil()
{
   simpul *baru;
   baru=awal;
   while(baru!=NULL)
   {
     cout<<baru->nama<<"  ";
     baru=baru->next;

   }
}






