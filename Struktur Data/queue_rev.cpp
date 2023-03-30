#include <conio.h>
#include <iostream>
using namespace std;
struct simpul
{
  int nilai;
  simpul *next;
};
simpul *front,*rear;
void insert_queu();
void tampil();
void hapus_queu();

int  main()
{
  front=NULL;
  int pil=1;
  while(pil!=4)
  {
	system("cls");	
     cout<<"1.Insert Queue\n";
     cout<<"2.Hapus Queuq\n";
     cout<<"3.Tampil Isi Link List\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         insert_queu();
     else if(pil==2)
         hapus_queu();
     else if(pil==3)
         tampil();
  }

}

void insert_queu()
{
 int dat;
 simpul *baru;
 baru=new simpul;
 cout<<" Masukkan Nilai :";
 cin>>dat;
 baru->nilai=dat;
 baru->next=NULL;
  if (front==NULL)
     front=baru;
  else
     rear->next=baru;
  rear=baru;
}

void hapus_queu()
{
  simpul *tampil;
  if (front==NULL)
     cout<<" Queue Masih Kosong, tidak ada yang DIHAPUS";
  else
  {
  	tampil=front;
    front=front->next;
    delete tampil;
  }

}

void tampil()
{
   simpul *tampil;
   tampil=front;
   cout<<"Front <-- ";
   while(tampil!=NULL)
   {
     cout<<tampil->nilai<<"  ";
     tampil=tampil->next;
   }
   cout<<"--> Rear";
   getch();
}

