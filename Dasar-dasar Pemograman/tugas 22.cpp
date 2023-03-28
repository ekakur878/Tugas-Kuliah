#include <iostream>

using namespace std;

const int MAX_SIZE = 10; // Maksimum ukuran antrian

// Deklarasi kelas queue
class Queue {
  private:
    int data[MAX_SIZE]; // Array untuk menyimpan elemen antrian
    int head; // Indeks elemen pertama dalam antrian
    int tail; // Indeks elemen terakhir dalam antrian
  public:
    // Konstruktor
    Queue() {
      head = 0;
      tail = -1;
    }

    // Metode untuk menambahkan elemen ke antrian
    void enqueue(int value) {
      if (tail == MAX_SIZE - 1) {
        cout << "Error: Queue is full" << endl;
      } else {
        data[++tail] = value;
      }
    }

    // Metode untuk mengeluarkan elemen dari antrian
    int dequeue() {
      if (head > tail) {
        cout << "Error: Queue is empty" << endl;
        return -1;
      } else {
        return data[head++];
      }
    }

    // Metode untuk mencetak semua elemen dalam antrian
    void printQueue() {
      if (head > tail) {
        cout << "Error: Queue is empty" << endl;
      } else {
        cout << "Queue: ";
        for (int i = head; i <= tail; i++) {
          cout << data[i] << " ";
        }
        cout << endl;
      }
    }
};

int main() {
  // Buat objek queue
  Queue q;

  // Tambahkan elemen ke antrian
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  // Cetak semua elemen dalam antrian
  q.printQueue(); // Output: Queue: 1 2 3

  // Keluarkan elemen dari antrian
  q.dequeue();

  // Cetak semua elemen dalam antrian
 q.printQueue(); // Output: Queue:  2 3

  return 0;
}
