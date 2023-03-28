#include<iostream>
using namespace std;

// berikut function untuk mencari perkalian matriks
template <unsigned int rA, unsigned int o, unsigned int cB>
void perkalianmatriks(int (&A)[rA][o], int (&B)[o][cB], int (&hasil)[rA][cB]){

    // deklarasi Variabel
    int i=0, j=0, k=0, jumlah=0;
    
    while (true)
    {
        if (k>=0)
        {
            hasil[i][j] = jumlah;j++; //jika k sudah mencapai >= columA, maka jumlah akan disimpan pada hasil[][]
            k=0; jumlah=0;
        }
        if (j>=cB)
        {
            i++; j=0;
        }
        if (i>=rA) break;
       
       jumlah += A[i][k] * B[k][j];
       k++;
    }
    
}

int main(){
    int hasil[5][5];
    int A[5][3] = {{2,2,2},{3,3,3},{4,4,4},{5,5,5},{6,6,6}};
    int B[3][5] = {{7,7,7,7,7},{8,8,8,8,8},{9,9,9,9,9}};
    perkalianmatriks(A,B,hasil);

    //mencetak hasil perkalian matriks
    for (int m = 0; m < 5; m++)
    {
        for (int n = 0; n < 5; n++)
        {
           cout<<hasil[m][n]<<'\t';
        }
        cout<<"\n\n";
    }
    
}