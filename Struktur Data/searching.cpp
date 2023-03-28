#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int a[8],nilai;
void tampil();
void sisip();
void senti();
void tambah();
void linear();
void biner();

int i,n,t,j;
int main()
{
  int pil=1;
  while(pil!=7)
  {
     system("cls");
     cout<<"1.Tambah \n";
     cout<<"2.Sorting \n";
     cout<<"3.Tampil Data\n";
     cout<<"4.Searching Linear\n";
     cout<<"5.Searching Sentinen\n";
     cout<<"6.Searching Binary Search\n";
     cout<<"7.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah();
     else if(pil==2)
         sisip();
     else if(pil==3)
       	tampil();
     else if(pil==4)
       	linear();
     else if(pil==5)
       	senti();
	 else if(pil==6)
       	biner();	
     getch();
  }
}

void tambah()
{
  for(int i=1;i<6;i++)
  {
    cout<<"data ke "<<i<<" =";
    cin>>a[i];
  }
}


void tampil()
{
  for(int i=1;i<6;i++)
    cout<<a[i]<<"  ";
  cout<<'\n';
}

void sisip()
{
  int n=5;
  for (i=1;i<=n-1;i++)
  {
    cout<<"Iterasi ke ="<<i<<'\n';
    for(j=1;j<=n-i;j++)
    {
     if (a[j]>a[j+1])
     {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;

     }
         tampil();
    }
  }
}


void senti()
{
  int x;	
  cout<<"Data yang dicari =";cin>>nilai;
  i=1;
  a[6]=x;
  while (a[i]!=nilai) 	i++;
  if (i<6)
      cout<<"Data Diketemukan pada urutan ke "<<i;
  else
      cout<<"Data Tidak Diketemukan ";
}

void linear()
{
  cout<<"Data yang dicari =";cin>>nilai;
  i=1;
  while (i<6)
  if (a[i]==nilai)
  {
    cout<<"Data Diketemukan pada urutan ke "<<i;
    return;
  }
  else
    i++;
 cout<<"Data Tidak Diketemukan ";
}

void biner()
{
  cout<<"Data yang dicari =";cin>>nilai;
   int awal=1,akhir=5,tengah;
  i=0;
  while (awal<=akhir)
  {
    tengah=(awal+akhir)/2;
    i++;
    if (a[tengah]==nilai)
    {
      cout<<"Data Diketemukan pada urutan ke "<<tengah;
      cout<<"\nJumlah Iterasi ="<<i;
      return;
    }
    else if (a[tengah]<nilai)
       awal=tengah+1;
    else
        akhir=tengah-1;

  }
  cout<<"Data Tidak Diketemukan ";

}
