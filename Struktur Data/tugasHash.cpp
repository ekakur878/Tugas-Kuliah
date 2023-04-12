#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
struct simpul
{
  int nilai;
  simpul *next;
};
simpul *awal[5];

void tambah_urut();
void tampil();
void cari();

int main()
{
  for(int i=0;i<5;i++){
         awal[i]=NULL; //memberi harga awal pada Awal
  }
  int pil=1;
  while(pil!=4)
  {
    // system("clear");
    cout <<"\n\n\n";
     cout<<"1.Tambah Urut\n";
     cout<<"2.Tampil Isi Link List\n";
     cout<<"3.Cari Data \n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah_urut();
     else if(pil==2)
         tampil();
     else if(pil==3)
         cari();
      getch();
  }

}


void tambah_urut()
{
 int dat, ind, index2;
 simpul *baru,*pos1,*pos2;
 baru=new simpul;
 system("clear");
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
 ind= dat-(5*int(dat/5)); //ind=(dat % 5)
//  index2=dat % 5;
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
   system("clear");
   for (int i=0;i<5;i++)
   {
        baru=awal[i];
     if (baru!=NULL)
          cout<<"\n DATA PADA INDEK KE "<<i<<" :";
    while(baru!=NULL)
    {
     cout<<"  "<< baru->nilai;
     baru=baru->next;
    
    }
  }
}

void cari()
{
   simpul *baru;
   int ind,dat, index2;
   cout<<" Data yang dicari :";
   cin>>dat;
   ind = dat % 5;
   index2 = dat % 5;
   baru=awal[ind];
   while(baru!=NULL)
   {
     if(baru->nilai==dat)
        break;
     baru=baru->next;
   }
   if (baru==NULL)
     cout<<" \n\nDATA tidak ditemukan ";
   else
     cout<<" \n\nDATA ditemukan pada indek :"<<ind;
}

