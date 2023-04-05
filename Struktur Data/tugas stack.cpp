// #include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct simpul
{
  int nilai;
  char nama[20];
  simpul *next;
};
simpul *front,*rear;
void insert_queu();
void tampil();
void hapus_queu();


int main()
{
  front=NULL;
  int pil=1;
  while(pil!=4)
  {
     system("cls");
     cout<<"1.Insert Stack\n";
     cout<<"2.Hapus Stack\n";
     cout<<"3.Tampil Isi Stack\n";
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
 char dat2[20];
 simpul *tes;
 tes=new simpul;
 cout<<"Masukan Nama : ";
 cin>>dat2;
 strcpy(tes->nama,dat2);
 cout<<" Masukkan Nilai :";
 cin>>dat;
 tes->nilai=dat;
 tes->next=NULL;
  if (front==NULL)
     rear=tes;
  else
     tes->next=front;
  front=tes;
}

void hapus_queu()
{
  simpul *pos;
  if (front==NULL)
     cout<<" Stack Masih Kosong, tidak ada yang DIHAPUS";
  else
  {
    pos=front->next;
    delete front;
    front=pos;
   }
}

void tampil()
{
   simpul *tampil;
   tampil=front;
   cout<<"Front <-- ";
   while(tampil!=NULL)
   {
     cout<<"|"<<tampil->nama<<"  "<<tampil->nilai<<"| ";
     tampil=tampil->next;
   }
   cout<<"--> Rear";
   getch();
}
