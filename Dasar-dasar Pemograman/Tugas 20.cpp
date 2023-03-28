//Nama		: Eka Kurniawan Agustyas Komstyadi
//NBI		: 1462200171
//Program	: Vektor

#include <iostream>

using namespace std;

class Vektor{
    
    public:
    
	int i, n, V[];

    Vektor(){

	}
    int getV(int i){
    	return V[i];
	} 

    void setV(int i, int x){
		n++;
		V[i] = x;
	}
    
    void insertV(int i, int x){
    	n++;
    	for (int j=n;j>i;j--){
    		V[j] = V[j-1];
		}
		V[i]=x;
	}

     void erase(int i){
    	for (int j=i;j<n;j++){
    		V[j]=V[j+1];
		}
		n--;
	}
	
	void printV(){
		for (i=0;i<n;i++){
			cout<<V[i]<<" ";
		}
	}
};

int main(){
	Vektor a;
	a.setV(0,1);	//mengisi V[0] dengan 1
	a.setV(1,2);	//mengisi V[0] dengan 1
	a.setV(2,3);	//mengisi V[0] dengan 1
	a.setV(3,4);	//mengisi V[0] dengan 1
	a.setV(4,5);	//mengisi V[0] dengan 1
	a.insertV(2,7);	//menyisipkan V[2] dengan 7
	a.printV();		//mencetak V[]
	cout<<endl;
	a.erase(2);		//menghapus V[2] yang tadi diisi 7
	a.printV();
	return 0;
}
