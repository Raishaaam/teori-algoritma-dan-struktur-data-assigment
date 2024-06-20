Praktikum Alpro
# <h1 align="center">Tugas 3 Struktur Data</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## 1. Berikan penjelasan dan contoh program(beserta penjelasan alur program) masing-masing materi struktur data berikut:
### Priority Queue 

`Priority Queue` merupakan jenis struktur data yang didasarkan pada struktur Queue pada umumnya. Pada `Priority Queue`, terdapat salah satu metode implementasi adalah dengan menggunakan data heap. Dalam implementasi ini, terdapat tiga pokok atribut yaitu `heaps`, `comparator`, dan `last`[1]. 

`Priority Queue` adalah jenis antrian yang mengatur elemen berdasarkan tingkat prioritasnya. Elemen dengan prioritas lebih tinggi biasanya diproses sebelum elemen dengan prioritas lebih rendah, Anterian prioritas sering digunakan dalam sisten real-time, dimana urutan pemrosesan elemen dapat berdampak secara signifikan[2].  

### Metode Dalam Priority Queue    
1. `Push()` Digunakan untuk memasukkan elemen baru ke dalam antrian dengan mempertimbangkan prioritasnya[2].
2. `Pop()` Digunakan untuk menghapus elemen dengan prioritas tertinggi dari antrian[2].
3. `Size()` Digunakan untuk mendapatkan jumlah elemen yang saat ini ada dalam antrian[2].
4. `Empty()` Digunakan untuk mengetahui apakah antrian tersebut kosong atau tidak[2].
5. `Top()` Merujuk pada elemen dengan prioritas tertinggi yang ada dalam antrian[2].
6. `Swap()` Proses menukar posisi dua elemen yang berbeda dalam antrian.
7. `Emplace()` Metode untuk menambahkan elemen baru ke dalam antrian dengan membuat elemen baru menggunakan nilai yang diberikan saat penambahan[2].

### Jenis Priority Queue
1. `Ascending Order Priority Queue`
2. `Descending Order Priority Queue`[2].

### Keunggulan Priority Queue
1. `Akses Elemen dengan Cepat` Karena elemen yang terdapat dalam antrian prioritas diurutkan berdasarkan prioritas yang artinya elemen dengan prioritas tertinggi dapat diakses dengan mudah tanpa harus mencari di semua antrian[2].
2.`Pengurutan Dinamis` Elemen-elemen dalam antrian prioritas dapat diperbarui nilai prioritasnya, yang memungkinkan antrian untuk mengurutkan ulang secara dinamis saat prioritas berubah[2].
3. `Implementasi Algoritma yang Efisien` Antrean prioritas digunakan dalam banyak algoritma untuk meningkatkan efisiensi, seperti algortima Dijkstra untuk menemukan jalur terpendek dalam graf dan algoritma pencarian A* untuk pencarian jalur[2].
4. `Penggunaan dalam Sistem Real-Time` Karena antrean prioritas memungkinkan pengambilan elemen dengan prioritas tertinggi dengan cepat, mereka sering kali digunakan dalam sistem real-time dimana kecepatan pemrosesan sangat penting[2].

### Kekurangan Priority Queue
1. `Kompleksitas Tinggi` Antrean prioritas lebih kompleks dibandingkan dengan struktur data sederhana contohnya seperti array dan linked list, sehingga mungkin lebih sulit untuk diterapkan dan dipelihara[2].
2. `Konsumsi Memori Tinggi` Menyimpan nilai prioritas untuk setiap elemen dalam antrian prioritas dapat menghabiskan memori tambahan, yang bisa menjadi masalah dan sistem dengan sumber daya terbatas[2].
3. `Tidak Terlalu Efisien` Dalam beberapa kasus, struktur data lain seperti stack atau binary tree mungkin lebih efesien untuk operasi tertentu, seperti menemukan elemen minimum atau maksimum dalam antrian[2].
4.  `Kurang Dapat Diprediksi` Karena pada urutan elemen dalam antrian prioritas ditentukan oleh nilai prioritasnya, urutan pengambilan elemen mungkin kurang dapat diperdiksi dibandingkan dengan struktur data lain seperti tumpukan atau antrian yang mengikuti prinsip first-in. first-out (FIFO) atau last-in, first-out(LIFO)[2].


## Priority Queue
```C++
#include <iostream>
#include <queue>

using namespace std;

void showpq(priority_queue<int> g) { //untuk menampilkan antrian prioritas
    while (!g.empty()) { //loop hingga antrian kosong
        cout << ' ' << g.top(); // untuk print elemen teratas dari antrian
        g.pop(); // untuk menghapus elemen teratas dari antrian
    }
    cout << '\n'; // newline
}

void showArray(int* arr, int n) { // menampilkan array
    for (int i = 0; i < n; i++) { // loop melalui array
        cout << arr[i] << ' '; // print setiap elemen array
    }
    cout << endl; // newline
}

int main() { // fungsi main
    int arr[6] = { 12, 56, 75, 25, 9, 98 }; // deklarasi dan inisialisasi array
    priority_queue<int> gquiz; // deklarasi antrian prioritas untuk menyimpan int
    for (int i = 0; i < 6; i++) { // loop melalui array
        gquiz.push(arr[i]); // push setiaep elemen array ke dalam antrian prioritas
    }

    cout << "Array: "; // print array
    showArray(arr, 6); // untuk menampilkan array

    cout << "Priority Queue : "; // print priority queue
    showpq(gquiz); // untuk menampilkan priority queue

    return 0;
}

```
### Output
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/d79c26eb-6cdf-4848-8a2a-d6274523dba1)

Kode program ini merupakan implementasi untuk membuat antrian prioritas dari sebuah array dan menampilkan keduanya ke konsol. Fungsi `showpq` digunakan untuk menampilkan elemen-elemen dalam antrian prioritas dalam urutan menurun, sedangkan fungsi `showArray` digunakan untuk menampilkan elemen-elemen array dalam urutan aslinya. Pada fungsi `main`, array dengan 6 elemen diinisialisasi dan setiap elemen array didorong ke dalam antrian prioritas menggunakan fungsi `push`. Kemudian, array dan priority queue ditampilkan ke konsol menggunakan fungsi `showArray` dan `showpq`. Hasilnya, array akan ditampilkan dalam urutan aslinya, sedangkan antrian prioritas akan menampilkan elemen-elemen dalam urutan menurun, karena antrian prioritas mengatur elemen-elemen berdasarkan nilai tertinggi.


## Hash Table

Hash Table adalah salah satu struktur data yang digunakan untuk penyimpanan data sementara. Tujuan utama penggunaan hash table adalah untuk mempercepat  proses pencarian kembali data yang disimpan. Dengan menggunakan teknik penyimpanan khusus, hash table memastikan bahwa waktu yang diperlukan untuk menambahkan data (insertions), menghapus data (deletions), dan mencari data (searching) relatif sama, jika dibandingkan dengan struktur data atau algoritma lainnya[3]. 

Hash Tabel adalah metode untuk menyimpan data dalam memori dalam memori dalam bentuk baris dan kolom sehingga membentuk tabel yang dapat diakses dengan cepat. Setiap sel yang merupakan titik pertemuan antara baris dan kolom dalam hash table tempat data disimpan disebut slot[4]. 

Hash Table terdiri dari dua komponen utama, yaitu sebuah array dan sebuah fungsi pemetaan yang dikenal sebagai fungsi hash. Fungsi hash mendistribusikan data yang dimasukkan oleh pengguna ke dalam tabel atau array yang tersedia. Salah satu cara untuk menentukan kunci dalam hash table adalah dengan menggunakan sistem modulus (sisa pembagian dari dua bilangan) dari nilai integer pada data[4]. 

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/9fb289b5-6cd2-4ab0-a3c3-167eeb8104e1)

Selain contoh seperti yang ada di gambar, terdapat juga metode tabel hash yang dikenal dengan tabel akses langsung atau direct access table. Metode ini memetakan data dan menyimpannya dalam memori menggunakan kunci yang berupa alamat memori. Ketika melakukan pencarian, metode ini akan langsung mengakses alamat memori tempat data yang dicari berada[4].

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/ca6440d0-9a54-4465-b1b8-04459117a4ab)

### Kelebihan Hash Table
1. `Hash Table` dapat dikembangkan untuk mencari pola-pola tertentu dalam sebuah string atau kalimat, yang dimana hash table berfungsi memetakan urutan setiap karakter[4]. 
2. `Hash Table` juga dapat mempercepat waktu pencarian karena jika ada satu karakter saja yang tidak cocok, pencarian langsung berpindah ke bagian selanjutnya, sehingga tidak perlu mencari secara sekuensial[4].

### Kekurangan Hash Table
1. `Hash Table` memiliki kendala yang disebut `collision`, sehingga diperlukannya penanganan khusus untuk mengatasi masalah tersebut. Beberapa metode yang dapat digunakan untuk menangani collision antara lain `hash matrix`, `chaining`, `re-hashing`, `linear probing`, dan `quadratic probing`[4].

## Hash Table

```C++
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

```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/257a4b11-901a-464f-aaef-269adb5217ef)

Kode porgram ini merupakan implementasi dari sebuah struktur data hash tabel dengan menggunakan linked list, Dalam kode ini hash table dapat menyimpan pasangan kunci-nilai dan melakukan operasi seperti penyisipan, pencarian, penghapusan, dan traversal. Fungsi hash table sederhana digunakan untuk menghitung indeks bucket berdasarkan kuncinya. 

Pada kelas `HashTable` memiliki metode seperti `insert` untuk menyisipkan pasangan kunci-nilai, fungsi `get` digunakan untuk mencari nilai berdasarkan kunci, `remove` digunakan untuk menghapus pasangan kunci-nilai, dan yang terakhir terdapat `traverse` yang digunakan untuk mencetak semua pasangan kunci-nili dalam hash table. Dalam fungsi `main`, dapat digunakan untuk membuat sebuah objek `HashTable` dan melakukan operasi seperti penyisipan, pencarian, penghapusan, dan traversal untuk menunjukkan fungsionalitas dari hash table.


## Rekursif
Rekursif adalah proses pengulangan sesuatu melalui kesamaan diri[5]. Metode rekursif memecahkan masalah dengan memanggil salinan dirinya sendiri untuk menangani masalah yang lebih kecil. Kode rekursif umumnya lebih pendek dan lebih mudah ditulis dibandingkan dengan kode berulang. Biasanya, loop diubah menjadi fungsi rekursif saat dikompilasi atau diinterpretasikan. Rekursif paling berguna untuk tugas-tugas yang dapat didefinisikan dalam bentuk subtugas serupa. Misalnya, masalah sortir, pencarian, dan traversal sering kali memiliki solusi rekursif yang sederhana[6].

Fungsi rekursif melakukan sebagian tugas dengan memanggil dirinya sendiri untuk menangani subtugas. Pada titik tertentu, fungsi tersebut akan menemukan subtugas yang dapat diselesaikan tanpa memanggil dirinya sendiri. Dalam kasus ini, jika fungsi tidak berulang, disebut kasus dasar. Sebaliknya, ketika fungsi memanggil dirinya sendiri untuk menyelesaikan subtugas, disebut sebagai kasus rekursif. Semua fungsi rekursif dapat ditulis menggunakan format berikut[6]:

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/209251c7-291d-4e4b-8f0d-467ae98722c0)

### Kelemahan Rekursif
1. Stack Overflow dan Konsumsi Memori[7].
2. Pertimbangan Kinerja[7].
3. Analisis Kompleksitas dan Teknik Optimasi[7].

## Rekursif

```C++
#include <iostream>
using namespace std;

int pangkat(int a, int b){  // Fungsi pangkat yang digunakan untuk menghitung nilai a pangkat b
    int hasil = a;
    for(int i = 1; i < b; i++){  // Looping untuk menghitung nilai a pangkat b
        hasil = hasil * a;
    }
    return hasil; // Mengembalikan nilai hasil
}

int main(){
    int a; // Deklarasi variabel a untuk menyimpan nilai yang akan diinput
    int b; // Deklarasi variabel b untuk menyimpan nilai pangkat yang akan diinput
    cout << "Masukkan Angka: "; 
    cin >> a;
    cout << "Masukkan Pangkat: ";
    cin >> b;
    cout << " Hasil Perhitungan: " << pangkat(a,b) << endl;
    cin.get();
    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/5119ea53-9038-468f-a930-b239aa7b08e6)

Kode ini merupakan sebuah perhitunga nilai sebuah angka yang akan dipangkatan dengan nilai lainnya dengan metode struktur data rekursif. Program ini memiliki sebuah fungsi `pangkat` yang menghitung nilai `a` pangkat `b` menggunakan looping untuk mengalikan nilai `a` sebanyak `b-1` kali. Pada fungsi `main`, program meminta uset untuk memasukkan sebuah angka dan sebuah nilai pangkat yang kemudian memanggil fungsi `pangkat` untuk menghitung hasil perhitungan dan menampilkan hasilnya ke layar.


## Graph and Tree

Graph adalah kumpulan node (simpul) dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi)[8]. Graph digunakan untuk merepresentasikan objek-objek diskret dan hubungan antara objek-objek tersebut[8]. Representasi visual dari graph melibatkan penggunaan node, bulatan, atau titik (vertex) untuk menyatakan objek, sedangkan hubungan antara objek dinyatakan dengan garis (edge). Teori Graph adalah bidang studi yang luas yang didasarkan pada gagasan sederhana tentang titik-titik individu - yang dikenal sebagai simpul - dihubungkan oleh garis yang dikenal sebagai tepi. Masing-masing garis ini mungkin memiliki nilai numerik yang disebut berat dan mungkin juga memiliki arah[9].

### Jenis-jenis Graph
1. Graph Tak Berarah (undirected graph atau non-directed graph)[10].
2. Graph Berarah (directed graph)[10].
3. Graph Berbobot (Weighted Graph)[10].

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/2d28f794-99ab-46c7-9b4b-2fbcb4cf2518)

### Manfaat Graph
1. Menyediakan Representasi Abstrak:  
Graph menawarkan cara yang lebih baik untuk berurusan dengan konsep abstrak seperti hubungan dan interaksi, serta memberikan cara berpikir visual yang intuitif tentang konsep-konsep ini. Mereka membentuk dasar alami untuk menganalisis hubungan dalam konteks sosial[9].
2. Database Graph:  
Database graph telah menjadi alat komputasi umum dan alternatif untuk database SQL dan NoSQL, memudahkan pengelolaan dan pencarian data yang kompleks[9].
3. Pemodelan Alur Kerja:   
Graph digunakan untuk memodelkan alur kerja analitik dalam bentuk DAGs (Graph asiklik terarah). Beberapa kerangka kerja Neural Network juga menggunakan DAGs untuk memodelkan berbagai operasi di lapisan yang berbeda[9].
4. Aplikasi dalam Jejaring Sosial:  
Konsep teori graph digunakan untuk mempelajari dan memodelkan jejaring sosial, pola penipuan, pola konsumsi daya, viralitas, dan pengaruh di media sosial. Social Network Analysis (SNA) adalah salah satu aplikasi teori graph yang paling terkenal dalam ilmu data[9].
5. Algoritma Clustering:  
Teori graph digunakan dalam algoritma clustering, khususnya K-Means, untuk mengelompokkan data dengan cara yang lebih efisien[9].
6. Dinamika Sistem:  
Beberapa konsep teori graph digunakan dalam dinamika sistem, khususnya loop, untuk memahami dan memodelkan perilaku sistem yang kompleks[9].
7. Path Optimization:  
Path optimization adalah bagian dari masalah optimasi yang menggunakan konsep graph untuk menemukan jalur terpendek atau paling efisien dalam jaringan[9].
8. Efisiensi Komputasi:   
Dari perspektif ilmu komputer, graph menawarkan efisiensi komputasi. Kompleksitas Big O untuk beberapa algoritma lebih baik untuk data yang diatur dalam bentuk graph dibandingkan dengan data tabular, memungkinkan pemrosesan yang lebih cepat dan efisien[9].

### TREE
Tree dalam pemrograman merupakan struktur data yang tidak linear yang digunakan untuk merepresentasikan hubungan data yang bersifat hierarkis antara elemen-elemennya. Struktur ini terdiri dari kumpulan elemen, di mana salah satu elemen disebut root (akar) dan elemen-elemen lainnya disebut simpul (node/vertex). Simpul-simpul ini terpecah menjadi sejumlah himpunan yang tidak saling berhubungan satu sama lain, yang disebut subtree atau cabang[10].

![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/8f84a1f0-6c1d-44fa-9b3c-25ebc4a47cc9)


## Graph and Tree

```C++
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

    Node* findNode(Node* node, const string& value) {
        if (node == nullptr) return nullptr;
        if (node->data == value) return node;
        Node* foundNode = findNode(node->left, value);
        if (foundNode == nullptr) {
            foundNode = findNode(node->right, value);
        }
        return foundNode;
    }

    void printChildren(Node* node) {
        if (node->left) {
            cout << "Left child: " << node->left->data << endl;
        } else {
            cout << "Left child: None" << endl;
        }
        if (node->right) {
            cout << "Right child: " << node->right->data << endl;
        } else {
            cout << "Right child: None" << endl;
        }
    }

    void printDescendants(Node* node) {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        bool hasDescendants = false;
        cout << "Descendants of " << node->data << ": ";
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            if (current != node) {
                cout << current->data << " ";
                hasDescendants = true;
            }
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (!hasDescendants) {
            cout << "None";
        }
        cout << endl;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

public:
    int Raisha_2311110002;
    Tree() : root(nullptr) {}

    void insertRoot(const string& value) {
        if (root == nullptr) {
            root = new Node{value, nullptr, nullptr};
            cout << "Root node " << value << " berhasil ditambahkan." << endl;
        } else {
            cout << "Root Tersedia." << endl;
        }
    }

    void insertChild(const string& parent, const string& leftChild, const string& rightChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak tersedia." << endl;
            return;
        }
        if (leftChild != "None") {
            if (parentNode->left == nullptr) {
                parentNode->left = new Node{leftChild, nullptr, nullptr};
            } else {
                cout << "Left child tersedia untuk " << parent << endl;
            }
        }
        if (rightChild != "None") {
            if (parentNode->right == nullptr) {
                parentNode->right = new Node{rightChild, nullptr, nullptr};
            } else {
                cout << "Right child tersedia untuk " << parent << endl;
            }
        }
    }

    void updateNode(const string& oldValue, const string& newValue) {
        Node* node = findNode(root, oldValue);
        if (node != nullptr) {
            node->data = newValue;
            cout << "Node " << oldValue << " ditambahkan ke " << newValue << "." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void findAndPrintNode(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            cout << "Node ditemukan: " << node->data << endl;
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void preOrderTraversal() {
        cout << "PreOrder Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal() {
        cout << "InOrder Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal() {
        cout << "PostOrder Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    void printChildren(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printChildren(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void printDescendants(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printDescendants(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void deleteTree() {
        deleteSubtree(root);
        root = nullptr;
        cout << "Tree dihapus." << endl;
    }

    void deleteSubtree(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            deleteSubtree(node);
            cout << "Subtree mulai dari node " << value << " dihapus." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }
};

int main() {
    Tree tree;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Data untuk root node\n";
        cout << "2. Tambah child kanan dan child kiri\n";
        cout << "3. Update node\n";
        cout << "4. Find node\n";
        cout << "5. PreOrder Traversal\n";
        cout << "6. InOrder Traversal\n";
        cout << "7. PostOrder Traversal\n";
        cout << "8. Print Child\n";
        cout << "9. Print Descendants\n";
        cout << "10. Hapus Tree\n";
        cout << "11. Hapus Subtree\n";
        cout << "12. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        string value, leftChild, rightChild;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk root node: ";
                cin >> value;
                tree.insertRoot(value);
                break;
            case 2:
                cout << "Masukkan nama parent node: ";
                cin >> value;
                cout << "Masukkan nama left child: ";
                cin >> leftChild;
                cout << "Masukkan nama right child: ";
                cin >> rightChild;
                tree.insertChild(value, leftChild, rightChild);
                break;
            case 3:
                cout << "Masukkan nama node yang akan diupdate: ";
                cin >> value;
                cout << "Masukkan nama baru untuk node: ";
                cin >> leftChild; // reuse variable for new value
                tree.updateNode(value, leftChild);
                break;
            case 4:
                cout << "Masukkan nama node yang dicari: ";
                cin >> value;
                tree.findAndPrintNode(value);
                break;
            case 5:
                tree.preOrderTraversal();
                break;
            case 6:
                tree.inOrderTraversal();
                break;
            case 7:
                tree.postOrderTraversal();
                break;
            case 8:
                cout << "Masukkan node yang ingin dicetak child-nya: ";
                cin >> value;
                tree.printChildren(value);
                break;
            case 9:
                cout << "Masukkan nama node yang ingin dicetak descendants-nya: ";
                cin >> value;
                tree.printDescendants(value);
                break;
            case 10:
                tree.deleteTree();
                break;
            case 11:
                cout << "Masukkan nama node yang ingin dihapus subtree-nya: ";
                cin >> value;
                tree.deleteSubtree(value);
                break;
            case 12:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 12);

    return 0;
}
```

#### Output:
![image](https://github.com/Raishaaam/algoritma-dan-struktur-data-assigment/assets/161957283/34a656ea-850b-4d91-8f47-e843d5ddf9c8)

Kode program ini adalah sebuah implementasi dari struktur data tree dalam bahasa C++. Program ini memungkinkan pengguna untuk membuat dan mengelola sebuah tree, termasuk menambahkan node, mengupdate node, mencari node, mencetak traversal tree (preorder, inorder, postorder), mencetak anak dan keturunan node, serta menghapus tree dan subtree. Program ini menggunakan sebuah kelas Tree yang memiliki beberapa fungsi untuk mengelola `tree`, seperti `insertRoot` yang digunakan untuk menambahkan node root, lalu `insertChild` yang berfungsi untuk menambahkan child node, kemudian `updateNode` digunakan untuk mengupdate nilai node, `findAndPrintNode` digunakan untuk mencari dan mencetak node, serta beberapa fungsi untuk melakukan traversal pada tree seperti `preOrderTraversal`, `inOrderTraversal`, dan `postOrderTraversal`. Program ini juga memiliki fungsi untuk mencetak child dan descendant dari sebuah node, serta beberapa fungsi yang digunakan untuk menghapus tree dan subtree secara keseluruhan. Pada bagian main program ini menampilkan menu kepada user untuk memilih operasi yang ingin dilakukan pada tree, lalu melakukan operasi yang dipilih oleh user.


## Referensi
[1] A. Nurcholis, S. Batara, dan M. Octamanullah, "Penerapan Struktur Data Heap Priority Queue pada Algoritma Djikstra untuk Mendapatkan Kompleksitas O((n + m)log n)," Laboratorium Ilmu dan Rekayasa Komputasi, Departemen Teknik Informatika, Institut Teknologi Bandung, 2021.  
    Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Stmik/Makalah/MakalahStmik38.pdf  
[2] B. B. Pangestu, G. S. H. Barata, E. W. Lay, dan M. Alghifari, "Makalah Priority Queue Revisi," FAKULTAS TEKNIK UNIVERSITAS TANJUNGPURAPONTIANAK, 2023.  
    Available: https://id.scribd.com/document/657230171/Makalah-Priority-Queue-revisi  
[3]  Mulyana, A., et al., Cara Mudah Mempelajari Algoritma dan Struktur Data. Edisi Pertama. Yogyakarta : DIVA Press, 2021 Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf  
[4] J. Prestiliano. Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data. Fakultas Teknologi Informasi Universitas Kristen Satya Wacana, 2019.
Available: (https://repository.uksw.edu/bitstream/123456789/1012/2/ART_Jasson%20Prestiliano_Aplikasi%20tabel%20hash_Full%20text.pdf).  
[5]  A. S. Kom. Anisya, "Modul Praktikum Struktur Data - Rekursif," Institut Teknologi Padang, Padang, Indonesia.
Available: https://sisfo.itp.ac.id/bahanajar/BahanAjar/Anisya/Modul%202%20-%20Rekursi.pdf  
[6] J. T. Santoso, "STRUKTUR DATA dan ALGORITMA (Bagian 1)," Universitas Sains & Teknologi Komputer (Universitas STEKOM), 2021.
Available: https://digilib.stekom.ac.id/assets/dokumen/ebookfeb_79fedb4a8e12bce66ca9d67971af2563167f7d45_164187510 pdf  
[7] S. Mattoo, "Recursion in Data Structure," Apr 16, 2024.
Available:https://intellipaat.com/blog/recursion-in-data-structure/      
[8] Ade Mulyana, dkk, "Cara Mudah Mempelajari Algoritma dan Struktur Data," DIVA Press, Oktober 2021.
Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf        
[9] A. Zein and E. S. Eriana, "Algoritma dan Struktur Data," Unpam Press, 14 Januari 2022.
Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf  
[10] T. Triase, "Diktat Edisi Revisi Struktur Data," Fakultas Sains dan Teknologi, Universitas Islam Negeri Sumatera Utara Medan, 2020.
Available: http://repository.uinsu.ac.id/9717/2/Diktat%20Struktur%20Data.pdf