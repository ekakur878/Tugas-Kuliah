//Nama		: Gersom Halmaherantara Yudha
//NBI		: 1462200176
//Program	: Vektor

#include <iostream>

using namespace std;

class Stack{   
     int Bawah, Atas, Max,S[]; 
 public:	    	    
    Stack() {
    	Bawah=0; Atas=0; Max=6;
    }

    bool empty(){
    	if (S[Bawah]!=0) return false;
    	else return true;
	}
    
    bool full(){
    	if (Atas==Max)  return true;
    	else return false;
	}

    bool push(int x){
    	if (full()==1) {
    		cout<<"\nstack penuh\n";
    		return false;
		}
		else {
			cout<<"\nberhasil menambahkan "<<x<<endl;
			S[Atas]=x;
			Atas++;
		}
	}

    int pop(){
    	return S[Atas-1];
	}
	
	void print(){
		cout<<"-----------------"<<endl;
		if (empty()==0){
			for (int i=Atas-1;i>=0;i--){
				cout<<"|\t"<<S[i]<<"\t|"<<endl;
			}
		}
		else cout<<"    (kosong)\n"; 
		cout<<"-----------------"<<endl;
	}

};

int main(){
	Stack a;
	cout<<"Program stack\n";
	cout<<"Menampilkan kondisi stack sekarang, teratas adalah data terbaru : \n";
	a.print();
	cout<<"\nMengecek apakah stack dalam kondisi kosong, jika 0=tidak, 1=ya \n"<<a.empty();
	cout<<"\n\nMengecek apakah stack dalam kondisi penuh, jika 0=tidak, 1=ya \n"<<a.full();
	cout<<"\n\nMenambahkan 29 ke dalam stack ";a.push(29);
	cout<<"\nMenambahkan 31 ke dalam stack ";a.push(31);
	cout<<"\nMenambahkan 17 ke dalam stack ";a.push(17);
	cout<<"\nMenambahkan 17 ke dalam stack ";a.push(17);
	cout<<"\nMenambahkan 17 ke dalam stack ";a.push(17);
	cout<<"\nMenambahkan 18 ke dalam stack ";a.push(18);
	cout<<"\nMenambahkan 19 ke dalam stack ";a.push(19);
	cout<<"\nMenampilkan kondisi stack sekarang, teratas adalah data terbaru : \n";
	a.print();
	cout<<"\nMengambil stack teratas\n"<<a.pop();
	 
}
