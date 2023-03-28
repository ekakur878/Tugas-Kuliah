#include <iostream>
using namespace std;
 
int main()
{
  string x;
  int vokal = 0;
 
  cout << "Input kata / kalimat: ";
  getline(cin,x);
  for(int i = 0; i < x.length(); i++){
    if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o') {
     cout<<x[i]<<" "; 
	  vokal++;
    }
  }
cout << endl;
  if (vokal > 0) {
    cout << "Jumlah huruf vokal = " << vokal;
  }
  else {
    cout << "Huruf vokal tidak ditemukan";
  }
  cout << endl;
  //program ganjil
  int a;
  
  cout << "\nProgram Deret Angka Ganjil" <<endl;
  cout << "input : ";
  cin >> a;
  for(int i=0; i<=a; i++)
  {
  	if (i%2==1)
  	{
  		cout << i << " ";
	  }
  }
  return 0;
}