#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // inisialisasi array
    vector<vector<int>> arr = {{1, 2, 3, 4, 5}, {4, 5, 6}};

    // inisialisasi hash table
    unordered_map<int, unordered_map<int, int>> hashTable;

    // isi hash table dengan nilai pada array
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            hashTable[i][j] = arr[i][j];
        }
    }

    // cetak nilai pada hash table
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << "hashTable[" << i << "][" << j << "] = " << hashTable[i][j] << endl;
        }
    }

    return 0;
}
