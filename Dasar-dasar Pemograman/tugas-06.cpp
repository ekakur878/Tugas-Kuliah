/* ================================================
   Program  : Perhitungan Matematik
   Nama     : EKA KURNIAWAN AGUSTYAS KOMSTYADI
   NIM      : 1462200171
=================================================== */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float p=240, t=120, a=20, ts=25, r=21;
    const float phi=3.14;

    cout << "Nama   : Eka Kurniawan Agustyas Komstyadi \n";
    cout << "NBI    : 1462200171 \n";
    cout << endl;

    //menghitung luas multiplex
		int luasmultiplex = t * p;
		cout << "Luas Lembar Multiplex adalah \t\t\t: " << luasmultiplex << "cm";
		
	//menghitung luas segitiga
	int luassegitiga = 0.5 * a * ts;
		cout << "\nLuas segitiga adalah \t\t\t\t\t: " << luassegitiga << "cm";
		
	//Menghitung luas lubang segitiga, Contoh Disoal ini adalah 3 lubang
	int luastotalsegitiga = 3 * luassegitiga;
		cout << "\nLuas dari 3 lubang segitiga adalah \t\t: " << luastotalsegitiga << "cm";
	
	//menghitung luas dari lingkaran
	float luaslingkaran = phi * r * r;
		cout << "\nLuas lingkaran adalah \t\t\t\t\t: " << luaslingkaran << "cm";	 
		
	//Menghitung Luas total lubang lingkaran,Contoh disoal ini adalah 2 lubang
	float luastotallingkaran = 2 * luaslingkaran;
		cout << "\nLuas dari 2 lubang lingkaran adalah \t: " << luastotallingkaran << "cm";		
			
	//Menghitung Total lubang dalam 1 lembar multiplex
	int totallubang = luastotalsegitiga + luastotallingkaran;
		cout << "\nTotal lubang dalam 1 lembar adalah \t\t: " << totallubang << " lubang ";
		
	//Menghitung sisa dari lembar multiplex
	int sisa = luasmultiplex-totallubang;
		cout << "\nSisa dalam 1 lembar multiplex adalah \t: " << sisa <<"cm";
	
    return 0;
}