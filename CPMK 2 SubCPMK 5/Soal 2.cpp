#include <iostream>
using namespace std;

// Struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru ke linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Fungsi untuk menghapus node di tengah linked list
void deleteNode(Node **head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = NULL;

    // Jika node pertama adalah node yang ingin dihapus
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    // Traverse linked list
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Jika node tidak ditemukan
    if (temp == NULL) return;

    // Jika node yang ingin dihapus adalah node tengah
    if (prev != NULL) {
        prev->next = temp->next;
        delete temp;
    }
}

// Fungsi untuk menampilkan linked list
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// Fungsi utama
int main() {
    Node* head = NULL;

    // Tambahkan node ke linked list
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Linked list sebelum menghapus node tengah: ";
    printList(head);

    // Hapus node tengah
    deleteNode(&head, 4);

    cout << "\nLinked list setelah menghapus node tengah: ";
    printList(head);

    return 0;
}