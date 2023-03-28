#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
char a[8][20],t[20],nilai[20];
void tampil();
void sisip();
void tambah();
void biner();

int i,n,j;
int main()
{
  int pil=1;
  while(pil!=5)
  {
     system("cls");
     cout<<"1.Tambah \n";
     cout<<"2.Sorting \n";
     cout<<"3.Tampil Data\n";
     cout<<"4.Searching Binary Search\n";
     cout<<"5.Exit\n\n";
     cout<<"Pilihan Anda =";
     cin>>pil;
     if(pil==1)
         tambah();
     else if(pil==2)
         sisip();
     else if(pil==3)
       	tampil();
     else if(pil==4)
       	biner();	
     getch();
  }
}

void tambah()
{
  for(int i=1;i<6;i++)
  {
    printf("data ke %d =",i);
    scanf("%s",a[i]);
  }
}


void tampil()
{
  for(int k=1;k<6;k++)
    cout<<a[k]<<"  ";
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
     if (strcmp(a[j],a[j+1])>0)
     {
         strcpy(t,a[j]);
         strcpy(a[j],a[j+1]);
         strcpy(a[j+1],t);

     }
         tampil();
    }
  }
}


void biner()
{
  cout<<"Data yang dicari = ";scanf("%s",&nilai);
   int awal=1,akhir=5,tengah;
  i=0;
  while (awal<=akhir)
  {
    tengah=(awal+akhir)/2;
    i++;
    if (strcmp(a[tengah],nilai)==0)
    {
      cout<<"Data Diketemukan pada urutan ke "<<tengah;
      cout<<"\nJumlah Iterasi = "<<i;
      return;
    }
    else if (strcmp(a[tengah],nilai)<0)
       awal=tengah+1;
    else
        akhir=tengah-1;

  }
  cout<<"Data Tidak Diketemukan ";

}
