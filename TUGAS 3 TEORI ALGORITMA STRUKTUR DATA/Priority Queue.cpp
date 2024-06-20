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