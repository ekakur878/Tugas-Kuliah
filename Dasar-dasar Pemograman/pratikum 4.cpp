#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
	string Nama;
	string Nbi;
	int nilai;
};

int main()
{
	int n;
	cout << "Input Jumlah Mahasiswa : ";
	cin >> n;
	Mahasiswa x[n];
	for(int i=0; i<n; i++)
	{
		cout << "Mahasiswa ke " << i+1 <<endl;
		cout << "Nama : ";
		cin >> x[i].Nama;
		cout << "NBI : ";
		cin >> x[i].Nbi;
		cout << "Nilai : ";
		cin >> x[i].nilai;
		cout << endl;
	}
	
	cout << "\n|" << setw(10) << "NAMA |"
		 << setw(10) << "NBI |"
		 << setw(10) << "NILAI |" <<endl;
	cout << "===============================\n";
	for(int i=0; i<n; i++)
	{
	cout << "\n|" << setw(8) << x[i].Nama << " |"
		 << setw(8) << x[i].Nbi <<" |"
		 << setw(8) << x[i].nilai <<" |" <<endl;
	}
}