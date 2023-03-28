#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

string mengubahNilaiKeHuruf(int nilai){
	string hasil; 
			if(nilai >= 85 && nilai <= 100){
            hasil = "A";
        	}
        	else if(nilai >= 80 && nilai <= 84.99) {
            	hasil = "A-";
        	}
        	else if(nilai >= 75 && nilai <= 79.99) {
            	hasil = "AB";
        	}
        	else if(nilai >= 70 && nilai <= 74.99) {
            	hasil = "B+";
        	}
        	else if(nilai >= 65 && nilai <= 69.99) {
            	hasil = "B";
        	}
        	else if(nilai >= 60 && nilai <= 64.99) {
            	hasil = "B-";
        	}
        	else if(nilai >= 55 && nilai <= 59.99) {
            	hasil = "BC";
        	}
        	else if(nilai >= 50 && nilai <= 54.99) {
        		hasil = "C+";
			}
			else if(nilai >= 45 && nilai <= 49.99){
				hasil = "C";	
			}
			else if(nilai >= 40 && nilai <= 44.99){
				hasil = "C-";
			}
			else if(nilai >= 35 && nilai <= 39.99){
				hasil = "CD";
			}
			else if(nilai >= 30 && nilai <= 34.99){
				hasil = "D";
			}
			else if(nilai >= 0 && nilai <= 29.99){
				hasil = "E";
			}
			return hasil;
}

struct mhs{
	int i;
	int no;
	string nim;
	string nama;
	int nilai;
	string huruf;
};
	

int main(){

	mhs daftarMahasiswa[5];
	daftarMahasiswa[0].no =1;
	daftarMahasiswa[0].nim ="1462200171";
	daftarMahasiswa[0].nama ="Eka Kurniawan A.K";
	daftarMahasiswa[0].nilai =100;
	daftarMahasiswa[0].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[0].nilai);
	
	daftarMahasiswa[1].no =2;
	daftarMahasiswa[1].nim ="1462200822";
	daftarMahasiswa[1].nama ="Setyawan Ibrahim";
	daftarMahasiswa[1].nilai =65;
	daftarMahasiswa[1].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[1].nilai);
	
	daftarMahasiswa[2].no =3;
	daftarMahasiswa[2].nim ="1462200712";
	daftarMahasiswa[2].nama ="Maulana Malik";
	daftarMahasiswa[2].nilai =55;
	daftarMahasiswa[2].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[2].nilai);
	
	daftarMahasiswa[3].no =4;
	daftarMahasiswa[3].nim ="1462200165";
	daftarMahasiswa[3].nama ="Wulan Anjarwati";
	daftarMahasiswa[3].nilai =75;
	daftarMahasiswa[3].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[3].nilai);
	
	daftarMahasiswa[4].no =5;
	daftarMahasiswa[4].nim ="1462200122";
	daftarMahasiswa[4].nama ="Adi Susanto";
	daftarMahasiswa[4].nilai =80;
	daftarMahasiswa[4].huruf = mengubahNilaiKeHuruf(daftarMahasiswa[4].nilai);
		cout<<"========================================================================================================="<<endl;
		cout << 
			setw(5) << "No" <<
	        setw(25) << "NIM" <<
	        setw(25) << "NAMA" <<
	        setw(25) << "NILAI" <<
	        setw(25) << "HURUF" << '\n';
	    cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	    for (int i = 0; i <5 ; i++){
	    	cout<<
				setw(5)<<daftarMahasiswa[i].no<<
				setw(25)<<daftarMahasiswa[i].nim<<
				setw(25)<<daftarMahasiswa[i].nama<<
				setw(25)<<daftarMahasiswa[i].nilai<<
				setw(25)<<daftarMahasiswa[i].huruf<<endl;
    }
		
	    
}