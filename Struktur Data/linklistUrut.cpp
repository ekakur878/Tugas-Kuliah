#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct simpul
{
  int nilai;
  simpul *next;
};
simpul *awal;
void tambah_urut();
void tampil();


int main()
{
  awal=NULL;
  int pil=1;
  while(pil!=3)
  {
     system("cls");
     cout<<"1.Tambah Urut\n";
     cout<<"2.Tampil Isi Link List\n";
     cout<<"3.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah_urut();
     else if(pil==2)
         tampil();
      getch();
   }

}


void tambah_urut()
{
 int dat;
 simpul *baru,*pos1,*pos2;
 baru=new simpul;
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
 pos1=pos2=awal;
// pos1=awal;pos2=pos1;
 if (awal==NULL)
   awal=baru;
 else
 {
   while (pos1!=NULL&&pos1->nilai<baru->nilai )
   {
      pos2=pos1;
      pos1=pos1->next;
   }
   baru->next=pos1;
   if (pos1!=awal)
      pos2->next=baru;            //posisi ditengah dan belakang
   else
      awal=baru;  //posisi di awal
 }
}

void tampil()
{
   simpul *baru;
   baru=awal;
   while(baru!=NULL)
   {
     cout<<baru->nilai<<"  ";
     baru=baru->next;
   }
}
