#include <iostream>
using namespace std;

int main(){
   int state;
   char inp[10];
   int pos;
   char lagi;
   do{
        cout<<"Masukkan input (beri spasi di akhir) :  ";cin>>inp;          //masukkan string input
        state = 1;         //mulai dari state awal B;
         for(pos=0;inp[pos];pos++)
         {
   	     switch(state)
           {
           case 0 :        //di state B
               if(inp[pos]=='0') state = 2;   //jika dibaca �0' ke state A
   	           else if(inp[pos]=='1') state=3; //jika dibaca �1' ke state B
               break;
      	  case 1 ://di state A
               if(inp[pos]=='0') state = 0;   //jika dibaca �0' ke state C
   	           else if(inp[pos]=='1') state=2; //jika dibaca �1' ke state B
					break;
           case 2 ://di state C
               if(inp[pos]=='0') state = 1;  //jika dibaca �0' ke state A
                  else if(inp[pos]=='1') state=3; //jika dibaca �1' ke state C
					break;
           case 3 ://di state C
               if(inp[pos]=='0') state = 0;  //jika dibaca �0' ke state A
   	           else if(inp[pos]=='1') state=3; //jika dibaca �1' ke state C
               break;
           }
         }
              //jika state terakhir adalah final state (q0) maka diterima
      if (state==2 || state==3)cout<<"String tersebut diterima (ACCEPTED) \n";
      	else cout<<"String Tersebut Ditolak (REJECTED)\n";
      if(state==0) cout<<"Posisi di A";
   		else if(state==1) cout<<"Posisi di C";
		    else if(state==2) cout<<"Posisi di D";
      		else cout<<"Posisi di B";
   	cout<<"\nMasukkan input lain? (y/t) : ";  cin>>lagi;
	} while(lagi!='t');
}
