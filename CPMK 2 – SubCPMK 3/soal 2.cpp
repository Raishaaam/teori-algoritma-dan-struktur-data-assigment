#include <iostream> // Mendefinisikan library untuk input dan output
using namespace std; // Menggunakan nama spasi standar

// Fungsi linearSearch menerima tiga parameter: array arr, ukuran array n, dan nilai yang ingin dicari x
int linearSearch(int arr[], int n, int x) {
    // Melakukan perulangan dari indeks 0 sampai n-1
    for (int i = 0; i < n; i++) {
        // Jika nilai pada indeks i sama dengan x, maka fungsi akan mengembalikan indeks i
        if (arr[i] == x) {
            return i;
        }
    }
    // Jika nilai x tidak ditemukan, maka fungsi akan mengembalikan nilai -1
    return -1;
}

int main() {
    // Deklarasi array dan nilai yang ingin dicari
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    // Pemanggilan fungsi linearSearch
    int hasil = linearSearch(arr, n, x);

    // Menampilkan hasil pencarian
    if (hasil == -1) {
        cout << "Nilai " << x << " tidak ditemukan dalam array" << endl;
    } else {
        cout << "Nilai " << x << " ditemukan pada indeks ke-" << hasil << endl;
    }

    return 0;
}
