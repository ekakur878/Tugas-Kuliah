#include <iostream>
#include <string.h>
using namespace std;


int main(){
 //string K; 
 string plainteks, cipherteks;
 int i, k;
 char c;
 cout<<"Perhitungan Caesar Chiper"<<endl;
 cout<< "Ketikkan pesan: ";
 getline(cin,plainteks);
 cout<< "Masukkan jumlah pergeseran (0-25): ";
 cin >> k;
 
 for(i =0; i<plainteks.length(); i++){
  c = plainteks[i];
  if(isalpha(c)){
   c= toupper(c);
   c=c-65;
   c=(c+k)%26;
   c=c+65;
  }
  cipherteks=cipherteks+c;
 } 
 cout<<"Cipherteks: "<< cipherteks<<endl;
 return 0;
}
