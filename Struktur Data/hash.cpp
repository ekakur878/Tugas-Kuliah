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
simpul *awal[5];

void tambah_urut();
void tampil();


int main()
{
  for(int i=0;i<5;i++){
  //  awal[i] = NULL; //memberi harga awal pada Awal
  awal[i]->group;
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
 int dat, ind;
 simpul *baru,*pos1,*pos2;
 baru=new simpul;
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
 ind= dat-(5*int(dat/5)); //ind=(dat % 5)
 pos1=awal[ind];pos2=pos1;
 if (awal[ind]==NULL)
   awal[ind]=baru;
 else
 {
   while (pos1!=NULL&&pos1->nilai<baru->nilai )
   {
      pos2=pos1;
     // if (pos1->nilai<baru->nilai)
         pos1=pos1->next;
   }
   baru->next=pos1;
   if (pos1!=awal[ind])
      pos2->next=baru;            //posisi ditengah dan belakang
   else
      awal[ind]=baru;  //posisi di awal
 }
}

void tampil()
{
   simpul *baru;
   for (int i=0;i<5;i++)
   {
    awal[i]->group;
     baru=awal[i];
     if (baru!=NULL)
          cout<<"\n Group "<<baru->group<<" DATA PADA INDEK KE "<< i <<" :";
    while(baru!=NULL)
    {
     cout<<"  "<< baru->nilai;
     baru=baru->next;
    }
  }
}
