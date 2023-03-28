// NAMA  : EKA KURNIAWAN AGUSTYAS KOMSTYADI
// NBI   : 1462200171
// KELAS : DASAR PEMOGRAMAN (R)


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int i=4; 
    int pilih=0;

    do
    {
        system("cls");

        cout << "Menu Pilihan program Dev-C++ \n\n";
		cout << "1. File \n";	
		cout << "2. Edit \n";
		cout << "3. Execute \n";
		cout << "4. Exit \n\n";
		cout << "Pilihan anda ? "; cin>>pilih;

	        switch (pilih){
	    	case 1:
                    up:system("cls");
                    int b;
                    cout << "(Anda masuk ke Menu File)\n";	
	    	        cout << "1. New \n";
		            cout << "2. Open \n";
		            cout << "3. Save \n";
                    cout << "4. Exit \n";
		            cout << "Pilihan anda ? "; cin>>b;
                    if (b == 1)
                    {                       
                        cout<<"New -untuk membuat aplikasi baru, berisikan Menu Text Edit, Project, App Expert, dan Resource Project";
                        getch();
                        break;
                    }else if (b==2)
                    {
                        cout<<"Open -untuk membuka aplikasi yang pernah di buat.";
                        getch();
                        goto mulai;
                    }else if (b==3)
                    {
                        cout<<"Save -untuk menyimpan aplikasi yang sedang aktip pada jendela editor.";
                        getch();
                        goto mulai;
                    }else if (b==4)
                        break;              
	    	case 2:
	    		mulai:system("cls");
                    int n;
                cout << "(Anda masuk ke Menu Edit)\n";	
	    	        cout << "1. Cut \n";
		            cout << "2. Copy \n";
		            cout << "3. Paste \n";
                    cout << "4. Exit \n";
		            cout << "Pilihan anda ? "; cin>>n;
                    if (n == 1)
                    {                       
                        cout<<"Cut -untuk memotong text yang di block pada coding dan di pindahkan ke clipboard.";
                        getch();
                        goto mulai;
                    }else if (n==2)
                    {
                        cout<<"Copy -untuk menggandakan text yang di  block tanpa menghilangkan text aslinya.";
                        getch();
                        goto mulai;
                    }else if (n==3)
                    {
                        cout<<"Paste -untuk menempatkan text yang ada pada clipboard ke jendela aktip dimana kursor berada.";
                        getch();
                        goto mulai;
                    }else if (n==4)
                        break;

	    	case 3:
	    		    back:system("cls");
                    int m;
                    cout << "(Anda masuk ke Menu Excute)\n";	
	    	        cout << "1. Run \n";
		            cout << "2. Compile \n";
                    cout << "3. Exit \n";
		            cout << "Pilihan anda ? "; cin>>m;
                    if (m == 1)
                    {                       
                        cout<<"Run -untuk mengeksekusi program.";
                        getch();
                        goto back;
                    }else if (m==2)
                    {
                        cout<<"Compile -untuk mengkompilasi script yang berada pada jendela editor yang sedang aktuf.";
                        getch();
                        goto back;
                    }else if (m==3)
                        break;
	    	case 4:
	    		cout << "\n\nApakah anda ingin keluar [Y/T]";
	    		break;
	    	default:
	    		cout << "Anda salah tekan pilihan "<< pilih;	
		}
		
		if (pilih>0 and pilih<4){
			cout << "\n\nTekan sembarang untuk melanjutkan";
			getch(); //utk menunda tampilan, menunggu tekan sembarang
		}
               if (pilih == 4){
        	        cout <<"\nTerima kasih yaa..."; //hanya jika keluar
		}       	    

    } while (pilih !=4);
     return 0;
}
