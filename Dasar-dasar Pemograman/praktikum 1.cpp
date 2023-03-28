#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int nilai;
	char namaMahasiswa[10];
	string Nbi;
	
	cout << "Masukan Nama = " ;
	cin >> namaMahasiswa;
	cout << "Masukan NBI = " ;
	cin >> Nbi;
	cout << "Masukan Nilai = ";
	cin >> nilai;
	
	cout << "\nNama : " << namaMahasiswa
		 << " NBI : " << Nbi
		 << " Nilai : " << nilai << endl;
	
	//Program ke 2
	int a,b,c;
	cout << endl;
	cout << "input A : " ;
	cin >> a;
	cout << "input B : " ;
	cin >> b;
	cout << "input C : " ;
	cin >> c;
	
	cout << "\nProgram Aritmatika\n";
	cout << "A + B " << (a+b) << endl;
	cout << "B - C " << (b-c) << endl;
	cout << "C * A " << (c*a) << endl;	
	cout << "A / B " << (a/b) << endl;
	cout << "B % C " << (b%c) << endl;
	
	cout << "\nProgram Relasional\n";
	cout << "A == B " << (a==b) << endl;
	cout << "B != C " << (b!=c) << endl;
	cout << "C > A " << (c>a) << endl;	
	cout << "A < B " << (a<b) << endl;
	cout << "B >= C " << (b>=c) << endl;
	cout << "A <= B " << (a<=b) << endl;
}