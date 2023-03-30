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
void tambah_depan();
void tampil();
void hapus();


int main()
{
  awal=NULL;
  int pil=1;
  while(pil!=4)
  {
     system("cls");
     cout<<"1.Tambah Urut\n";
     cout<<"2.Tampil Isi Link List\n";
     cout<<"3. Hapus Data\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah_depan();
     else if(pil==2)
          tampil();
      else if(pil==3)
          hapus();
      getch();
  }

}


void tambah_depan()
{
 int dat;
 simpul *baru,*pos1,*pos2;
 baru=new simpul;
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
 pos1=awal;pos2=pos1;
 if (awal==NULL)
   awal=baru;
 else
 {
   while (pos1!=NULL&&pos1->nilai<baru->nilai )
   {
      pos2=pos1;
      if (pos1->nilai<baru->nilai)
         pos1=pos1->next;
   }
   baru->next=pos1;
   if (pos1!=awal)
      pos2->next=baru;
   else
      awal=baru;
 }
}

void hapus()
{

 int dat;
 simpul *pos1,*pos2;
 cout<<" Masukkan Data yang dihapus :";
 cin>>dat;
 pos1=awal;pos2=pos1;
 if (awal==NULL)
   cout<<"Tidak ada data di dalam link list";
 else
 {
   while (pos1!=NULL )
   {
      if (pos1->nilai==dat)
        break;
      pos2=pos1;
      pos1=pos1->next;
   }
   if(pos1==NULL)
   {
     cout<<"Data yang dihapus tidak ditemukan";
     return ;
   }
   else
   if(pos1==awal)
     awal=awal->next;
   else
     pos2->next=pos1->next;
   delete pos1;

 }
}

void tampil()
{
   simpul *baru;
   baru=awal;
   while(baru!=NULL)
   {
     cout<<baru->nilai<<"  ";
     //<<"Alamatnya = "<<&baru<<" Almat Next= "<<&(baru->next)<<endl;
     baru=baru->next;
   }
}
