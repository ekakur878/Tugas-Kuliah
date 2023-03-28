#include <iostream>
#include <math.h>
using namespace std;

class BangunDatar{
  public:
    float lebar = 10;
    float panjang = 20;
    float SisiAtas = 30;
    float phi = 3.14;
    float r = 2;
  
    float PersegiPanjang(){
      return panjang*lebar;
    }
  
    float SisiMiring(){
      return sqrt((panjang*panjang)+(lebar*lebar));
    }
  
    float TrapesiumSikuSiku(){
      return 0.5*(20+30)*10;
    }
  
    float JajarGenjang(){
      return 2*(20+10);
    }
  
    float Lingkaran(){
      return 2*phi*r;
    }
};


int main(){
  BangunDatar A;
  
  cout << A.Lingkaran();
  
  return 0;
}