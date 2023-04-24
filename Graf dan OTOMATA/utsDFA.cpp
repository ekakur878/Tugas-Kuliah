#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main(){
	bool accept[4]={false,false,false,true};       //state akhir
	int dfa[4][2]={{3,1},{3,2},{2,2},{3,3}};     //DEFINISI DFA
	char inp[10];              //STRING INPUT
	int state;                        
	int input;             //ELEMEN HIMP. INPUT
	int pos;      //penunjuk posisi pembacaan input
	char lagi;
	do{
	     cout<<"Masukkan input (beri spasi di akhir) : ";
		cin>>inp;    //masukkan string input
		pos = 0;  //posisi awal pembacaan string input
		state = 0;        //mulai dari state awal 
		for(pos=0;inp[pos];pos++)
           {
          
                if(inp[pos]=='a') input = 0;   //input a diwakili dengan bil 0
   	       			else if(inp[pos]=='b') input=1; //input b diwakili dengan bil 1
   	        state= dfa[state][input]; //fungsi transisi
        	}
             //jika state terakhir adalah final state maka diterima
  	    if (accept[state]) cout<<"String tersebut diterima (ACCEPTED) \n";
	        else cout<<"String Tersebut Ditolak (REJECTED)\n";
   	    cout<<"Masukkan input lain? (y/t) : ";  cin>>lagi;
	} while(lagi!='t');	
}
