#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

      struct simpul
      {
      char nama[20];
      int nilai;
      simpul *next;
      };
      simpul *front,*rear;

      void insert_queu();
      void tampil();
      void hapus_queu();

      using namespace std;

      int main()
      {
      front=NULL;
      int pil=1;
      while(pil!=4)
      {
         system("cls");
         cout<<"1.Insert Queue\n";
         cout<<"2.Hapus Queue\n";
         cout<<"3.Tampil Isi Queue\n";
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
      simpul *baru;
      baru=new simpul;
      cout<<"Masukan NAMA    : ";
      cin>>dat2;
      strcpy(baru->nama,dat2);
      cout<<"Masukkan Nilai  : ";
      cin>>dat;
      baru->nilai=dat;
      baru->next=NULL;
      if (front==NULL)
         front=baru;
      else
         baru->next=rear;
      rear=baru;
      }

      void hapus_queu()
      {
      simpul *pos;
      if (front==NULL)
      {
         cout<<" Queue Masih Kosong, tidak ada yang DIHAPUS";
         getch();
      }
      else
         if(front==rear)
            front=rear=NULL;
         else
         {
            pos=rear;
            while(pos->next!=front)
               pos=pos->next;
            pos->next=NULL;    
            front=pos;
         }
      }

      void tampil()
      {
         simpul *tampil;
         tampil=rear;
         cout<<"Rear <-- ";
         while(tampil!=NULL)
         {
         cout<<"|"<<tampil->nama<<"  "<<tampil->nilai<<"| ";
         tampil=tampil->next;
         }
         cout<<"--> Front";
         getch();
      }
