#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "N = ";
    cin >> n;
    if(int i=1; i<=n)
    {
        for (int b = i; b < n; i++)
        {
        
        if(int j=b; j<n)
        {
            for (int l = j; l < n; l++)
            {
                 cout  << " ";
            }
        }
        else
        {
            if(int k=1; k<=b){
                for (int a = k; a <=b; a++)
                {
                    cout<<"*";
                }
            }
            else{
                cout << "\n";
            }
         }
        }

    }
    else
    {
        exit(0);
    }
    

}
