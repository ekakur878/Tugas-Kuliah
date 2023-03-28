#include <iostream>
#include <math.h>
#include <time.h> // library untuk time
using namespace std;

float AcakAngka(){
    float BilRandom;
    BilRandom = rand()%11;
    return BilRandom;
}
float PangkatDua(float n){
    return n*n;
}
float PangkatTiga(float n){
    return n*n*n;
}

string GanjilGenap(int n){
   string hasil;
   if(n%2==1)
   {
   hasil = "ganjil";
   } 
   else if(n%2==0)
   {
    hasil = "genap";
   }
   return hasil;
}

int main(){
    int Random, y[20], c[20];
    double total1=0, total2=0, TotalSemua;
    string x[20], b[20];

    srand(time(0));
    cout << "Pangkat Dua" << endl;
    for(int a=0;a<=10;a++){
        Random = AcakAngka();
        cout << " [" << Random << "=" << PangkatDua(Random) << "] +";
        total1=total1+PangkatDua(Random);
        x[a] = GanjilGenap(PangkatDua(Random));
        y[a] = PangkatDua(Random);
    }
    cout << "\b= " << total1 << endl;
    cout << endl;
    cout << "Pangkat Tiga" << endl;
    for(int a=0;a<=10;a++){
        Random = AcakAngka();
        cout << " [" << Random << "=" << PangkatTiga(Random) << "] +";
        total2=total2+PangkatTiga(Random);
        b[a] = GanjilGenap(PangkatDua(Random));
        c[a] = PangkatDua(Random);
    }
    cout << "\b= " << total2 << endl;
    cout <<endl;
    TotalSemua = total1 + total2;
    cout << total1 << " + " << total2 << " = " << TotalSemua <<endl;
    cout << endl;
    cout << "Group Bilangan Pangkat Dua " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << y[i] << " Bilangan " << x[i] <<endl;
    }
    cout << endl;
    cout << "Group Bilangan Pangkat Tiga " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << c[i] << " Bilangan " << b[i] <<endl;
    }
    

}