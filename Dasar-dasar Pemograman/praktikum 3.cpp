#include <iostream>
#include <math.h>
#define phi 3.14;
using namespace std;

double LuasAlas(int n)
{
	return n*n*phi;
}

int main()
{
//program menghitung volume balok
int a, b;
float volume;
int * aX, * bX;
aX = &a;
bX = &b;

cout << "Input Jari-jari : ";
cin >> * aX;
cout << "Input Tinggi : ";
cin >> * bX;

volume = LuasAlas(a) * b;

cout << "Volume Tabung = " << volume;

//program deret bilangan prima
int n;
	cout << "\n\nMasukan deretan angka = " ;
	cin >> n;
	cout << "\nBilangan Prima\n";
for (int i = 1; i <= n; i++) {
    bool is_prime = true;

    for (int j = 2; j <= sqrt(i); j++) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      cout << i << " Prima " <<endl;
    }
    else {
    	cout << i << endl;
	}
  }
}
