#include <iostream>
#include <conio.h>
using namespace std;

int main()
{    //pemberian variabel dan penetapan nilai
    int i, n, fibo[n];
	cout<<"\n===== Program Deret Suku Angka Fibonanchi =====\n";
	cout<<"\nMasukan Jumlah Suku Deret yang di inginkan : "; cin>>n;
	cout<<endl;
	cout<<"Menampilkan Hasil Perulangan 'for'"<<endl;
    for (i = 0; i < n; i++)  //perulangan untuk menampilkan hasil perulangan
    {
		if (i<2)
			fibo[i] = i;
		else
			fibo[i] = fibo[i - 1] + fibo[i - 2];
        cout << fibo[i]; // tampilan hasil
			if (i<n-1) 
			{
				cout<<" + ";
			} else {
				cout<<".";
				cout<<endl;
			}

			
    }

//Perulangan While
	i=0;
	cout<<"\nMenampilkan Hasil Perulangan 'While'\n";
	while (i<n)
    {
        if (i<2)
            fibo[i] = i;
        else
        fibo[i] = fibo[i-1] + fibo[i-2];
        cout<<fibo[i];
                 if(i < n-1){ 
                       cout<<" + ";
                  }else {
                    cout<<'.';
					cout<<endl; 
                  }
        i++;   
    }

//perulangan do while
	i=0;
	cout<<"\nMenampilkan Hasil Perulangan 'Do While'\n";
	do{
		 if (i<2)
            fibo[i] = i;
        else
        fibo[i] = fibo[i-1] + fibo[i-2];
        cout<<fibo[i];
                 if(i < n-1){ 
                       cout<<" + ";
                  }else {
                    cout<<'.';
					cout<<endl; 
                  }
        i++;   
	}
	while (i<n);


}
