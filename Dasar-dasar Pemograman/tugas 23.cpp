#include <iostream>

using namespace std;

// Struktur data untuk node
struct Node {
  int data;
  Node* next;
};

// Fungsi untuk menambah node baru di awal
void push(Node** head_ref, int new_data) {
  // Alokasi memori untuk node baru
  Node* new_node = new Node;

  // Isi data pada node baru
  new_node->data = new_data;

  // Tautkan node baru ke head
  new_node->next = (*head_ref);

  // Ganti head dengan node baru
  (*head_ref) = new_node;
}

// Fungsi untuk mencetak linked list
void printList(Node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
  cout << endl;
}

// Fungsi utama
int main() {
  // Inisialisasi head dengan NULL
  Node* head = NULL;

  // Menambah node baru di awal
  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);

  // Mencetak linked list
  cout << "Linked list: ";
  printList(head);

  return 0;
}
