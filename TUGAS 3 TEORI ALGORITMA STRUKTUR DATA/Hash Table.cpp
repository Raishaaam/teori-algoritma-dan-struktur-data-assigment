#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Ukuran maksimum tabel hash

// Fungsi hash sederhana
int hash_func(int key)
{
    return key % MAX_SIZE; // Fungsi hash yang mengembalikan sisa bagi key dengan MAX_SIZE
}

// Struktur data untuk setiap node
struct Node
{
    int key; // Kunci node
    int value; // Nilai yang terkait dengan kunci
    Node *next; // Pointer ke node berikutnya dalam bucket
    Node(int key, int value) : key(key), value(value), next(nullptr) {} // Konstruktor untuk struktur Node
};

// Kelas tabel hash
class HashTable
{
private:
    Node **table; // Array of pointers to Node structs, mewakili tabel hash

public:
    HashTable()
    {
        table = new Node *[MAX_SIZE](); // Alokasi memori untuk tabel hash
        for (int i = 0; i < MAX_SIZE; i++)
        {
            table[i] = nullptr; // Inisialisasi setiap bucket ke nullptr
        }
    }
    ~HashTable()
    {
        for (int i = 0; i < MAX_SIZE; i++)
        {
            Node *current = table[i];
            while (current!= nullptr)
            {
                Node *temp = current;
                current = current->next;
                delete temp; // Hapus setiap node dalam bucket
            }
        }
        delete[] table; // Hapus array tabel hash
    }

    // Insertion
    void insert(int key, int value)
    {
        int index = hash_func(key); // Hitung indeks bucket menggunakan fungsi hash
        Node *current = table[index];
        while (current!= nullptr)
        {
            if (current->key == key)
            {
                current->value = value; // Perbarui nilai jika kunci sudah ada
                return;
            }
            current = current->next;
        }
        Node *node = new Node(key, value); // Buat node baru dengan kunci dan nilai yang diberikan
        node->next = table[index];
        table[index] = node; // Sisipkan node baru di awal bucket
    }
    // Pencarian
    int get(int key)
    {
        int index = hash_func(key); // Hitung indeks bucket menggunakan fungsi hash
        Node *current = table[index];
        while (current!= nullptr)
        {
            if (current->key == key)
            {
                return current->value; // Kembalikan nilai yang terkait dengan kunci
            }
            current = current->next;
        }
        return -1; // Kembalikan -1 jika kunci tidak ditemukan
    }

    // Penghapusan
    void remove(int key)
    {
        int index = hash_func(key); // Hitung indeks bucket menggunakan fungsi hash
        Node *current = table[index];
        Node *prev = nullptr;
        while (current!= nullptr)
        {
            if (current->key == key)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next; // Perbarui pointer bucket jika node yang dihapus berada di awal
                }
                else
                {
                    prev->next = current->next; // Perbarui pointer node sebelumnya
                }
                delete current; // Hapus node
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse()
    {
        for (int i = 0; i < MAX_SIZE; i++)
        {
            Node *current = table[i];
            while (current!= nullptr)
            {
                cout << "Index " << i << ": " << current->key << ": " << current->value
                     << endl; // Cetak pasangan kunci-nilai dalam setiap bucket
                current = current->next;
            }
        }
    }
};

int main()
{
    HashTable ht;
    // Insertion
    ht.insert(1, 17);
    ht.insert(2, 45);
    ht.insert(3, 55);

    // Pencarian
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;

    // Penghapusan
    ht.remove(4);

    // Traversal
    ht.traverse();

    return 0;
}