Teori Alpro
# <h1 align="center">CPMK 2 - SubCPMK 7</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Soal

### 1.	Tulislah sebuah program dari operasi queue seperti enqueue/add, dequeue/remove, isEmpty, isFull, dll.

```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
````
### Output :
![image](https://github.com/Raishaaam/teori-algoritma-dan-struktur-data-assigment/assets/161957283/d4a6a91c-29c5-4e1e-b015-9415f563dd0c)

Program ini adalah implementasi antrian (queue) menggunakan array statis dengan kapasitas maksimum 5 elemen. Antrian ini digunakan untuk menampung nama customer yang sedang menunggu di teller. Di dalam program terdapat beberapa fungsi, yaitu `isFull()` untuk memeriksa apakah antrian itu penuh atau tidak, `isEmpty()` untuk memeriksa apakah antrian atau tidak, `enqueueAntrian(string data)` untuk menambahkan data ke antrian, `dequeueuAntrian()` untuk mengambil data dari antrian, `countQueue()` untuk memebersihkan semua data di antrian, dan `viewQueue()` untuk menampilkan semua data yang ada di antrian. Di `main()`, program ini memasukkan dua data ke dalam antrian, yaitu "Andi" dan "Maya', lalu menampilkan semua data yang ada di antrian dan jumlah antrian. Kemudian, program mengambil data dari antrian dan menampilkan semua data yang ada di antrian dan jumlah antrian. Hasil output program menunjukkan bahwa dua data yang dimasukkan ke antrian adalah "Andi" dan "Maya', setelah itu data "Andi" diambil dari antrian, dan terakhir semua data di antrian dihapus.