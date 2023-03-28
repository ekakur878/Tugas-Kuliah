#include <iostream>
#include <string.h>
using namespace std;

struct pljran
{
      int kode;
      string pelajaran;
      int sks;
};


int main(){
int search;
int x=5;
int found, position;
char loop;

pljran xy[5];
      xy[0].kode = 124;
      xy[0].pelajaran= "Bahasa indo";
      xy[0].sks = 3;
      xy[1].kode = 98;
      xy[1].pelajaran= "agama";
      xy[1].sks = 5;
      xy[2].kode = 67;
      xy[2].pelajaran= "pkn";
      xy[2].sks = 3;
      xy[3].kode = 55;
      xy[3].pelajaran= "penjas";
      xy[3].sks = 3;
      cout<<endl;
do{
cout << "mencar kode = ";cin>>search; 

for (int i=0,found=0;i<x && !found; ++i)
  if (xy[i].kode == search)
  {
    found = 1;
    position = i;
  }
  if (found != 0){
      cout  <<xy[position].kode <<endl
            << xy[position].pelajaran <<endl
            << xy[position].sks;
  } else{
      cout<<"The book is not exist";
 }
cout<<" balik maneh (y/t)"; cin>>loop;
}while(loop!='t');

}
