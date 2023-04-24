#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

struct simpul
{
  int group;
  int nilai;
  simpul *next;
};
simpul *awal[10][10];

void tambah_urut();
void tampil();


int main()
{
  for(int i=0;i<10;i++){
   awal[i][i] = NULL; //memberi harga awal pada Awal
  }
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
 int dat, ind, ind2;
 simpul *baru,*pos1,*pos2;
 baru=new simpul;
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
 ind = dat % 10;    //-(5*int(dat/5)); //ind=(dat % 5)
 ind2 = ind %10;
 pos1=awal[ind2][ind];pos2=pos1;
 if (awal[ind2][ind]==NULL)
   awal[ind2][ind]=baru;
 else
 {
   while (pos1!=NULL&&pos1->nilai<baru->nilai )
   {
      pos2=pos1;
     // if (pos1->nilai<baru->nilai)
         pos1=pos1->next;
   }
   baru->next=pos1;
   if (pos1!=awal[ind2][ind])
      pos2->next=baru;            //posisi ditengah dan belakang
   else
      awal[ind2][ind]=baru;  //posisi di awal
 }
}

void tampil()
{
   simpul *baru;
   for (int i=0;i<5;i++)
   {
     baru=awal[i][i];
     if (baru!=NULL)
          cout<<" DATA PADA INDEK KE "<< i <<" :";
    while(baru!=NULL)
    {
     cout<<"  "<< baru->nilai;
     baru=baru->next;
    }
  }
}
