//Nama		: Eka Kurniawan Agustyas Komstyadi
//NBI		: 1462200171
//Program	: Vektor

#include <iostream>

using namespace std;

class Vektor{
    
    public:
    
	int i, n=10, V[];

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
        Vektor e;
        e.setV(0,100);	//mengisi V[0] dengan 1
        e.setV(1,25);	//mengisi V[0] dengan 1
        e.setV(2,37);	//mengisi V[0] dengan 1
        e.setV(3,49);	//mengisi V[0] dengan 1
        e.setV(4,50);	//mengisi V[0] dengan 1
        e.insertV(4,90);	//menyisipkan V[2] dengan 90
        e.printV();		//mencetak V[]
        cout<<endl;
        e.erase(4);		//menghapus V[1] yang tadi diisi 80
        e.printV();

        return 0;
    }
