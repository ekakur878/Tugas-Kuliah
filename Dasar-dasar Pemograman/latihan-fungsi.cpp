#include <iostream>
#include<conio.h>
using namespace std;

void peringatan(){
    cout << "Hardisk akan Penuh";
    getch();
}

char konfirmasi(){
    cout << "Apakah Lanjut ? [Y/T]";
    char jwb="Y";
    while ((jwb=="Y") || (jwb=="y"))      
    {
        jwb=getch();
    }
    
}

int main (){
    peringatan();
    return 0;
}
