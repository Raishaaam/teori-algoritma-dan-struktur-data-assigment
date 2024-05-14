Teori Alpro
# <h1 align="center">CPMK 2 - SubCPMK 3</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Soal

### 1. Terdapat dua algoritma searching yang umum digunakan yakni, Binary Search dan Linear Search. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma! 

1. Binary Search

Binary Search adalah algoritma pengurutan yang digunakan untuk mencari posisi elemen spesifik dalam array yang telah diurutkan. Proses pengurutan dilakukan dengan cara:
1. Membandingkan elemen target dengan elemen di tengah array.
2. Jika elemen target lebih besar dari elemen di tengah, maka mencari di bagian kanan array.
3. Jika elemen target lebih kecil dari elemen di tengah, maka mencari di bagian kiri array.
4. Proses ini diulangi hingga elemen target ditemukan atau array habis dibandingkan.

Runtime:
1. `best case` untuk Binary Search adalah `O(1)`, karena dalam kasus terbaik, elemen target adalah elemen di tengah array dan tidak perlu dilakukan perbandingan lanjutan.
2. `worst case` untuk Binary Search adalah `O(logN)`, karena dalam kasus terburuk, elemen target tidak ditemukan dan perlu dilakukan perbandingan untuk setiap bagian array yang dibagi.

2. Linear Search

Linear Search adalah algoritma pengurutan yang digunakan untuk mencari posisi elemen spesifik dalam array. Proses pengurutan dilakukan dengan cara:
1. Menemukan elemen terkecil dalam bagian yang belum terurut dari array. 
2. Jika elemen target tidak ditemukan, maka mencari di elemen berikutnya.
3. Proses ini diulangi hingga elemen target ditemukan atau array habis dibandingkan.

Runtime:
1. `bast case` untuk Linear Search adalah `O(N)`, karena dalam kasus terbaik, elemen target ditemukan di awal array dan tidak perlu dilakukan perbandingan lanjutan.
2. `worst case` untuk Linear Search adalah `O(N)`, karena dalam kasus terburuk, elemen target tidak ditemukan dan perlu dilakukan perbandingan untuk setiap elemen dalam array.

3. Merge Sort

Merge Sort adalah algoritma pengurutan yang menggunakan strategi divide and conquer untuk mengurutkan data. Proses pengurutan dilakukan dengan cara:
1. Membagi array menjadi dua bagian yang sama besar.
2. Mengurutkan masing masing bagian secara rekursif.
3. Menggabungkan dua bagian yang telah terurut menjadi satu array yang terurut.

Runtime:
1. `best case` untuk Merge Sort adalah `O(*n* log(*n*))`, array dapat dibagi secara efisien dan pengurutan dilakukan secara rekursif.
2. `worst case` untuk Merge Sort adalah `O(*n* log(*n*))`, array tidak dapat dibagi secara efisien dan pengurutan dilakukan secara rekursif.


### 2. Buatlah fungsi dari salah satu algoritma searching pada soal nomor 1, dan berikan penjelasan pada program tersebut (35 Poin)

```C++
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
       n x, maka fungsi akan mengembalikan indeks i
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Deklarasi array dan nilai yang ingin dicari
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int hasil = linearSearch(arr, n, x);
    if (hasil == -1) {
        cout << "Nilai " << x << " tidak ditemukan dalam array" << endl;
    } else {
        cout << "Nilai " << x << " ditemukan pada indeks ke-" << hasil << endl;
    }

    return 0;
}
````

Program ini menggunakan Linear Search pada array. Terdapat fungsi `linear Search` yang menerima 3 parameter, yaitu array `arr`,ukuran array `n`, dan nilai yang ingin dicari yaitu `x`. Fungsi ini akan melakukan perulangan dari indeks ke 0 sampai `n-1` dan membandingkan setiap elemen pada array dengan nilai yang ingin dicari. Jika elemen tersebut sama dengan nilai yang ingin dicari, maka fungsi akan mengembalikan indeks dari elemen tersebut. Jika algoritma telah melakukan pencarian pada semua elemen pada array dan tidak menemukan nilai yang ingin dicari, maka fungsi akan mengembalikkan nilai -1. Di bagian `main`, akan memanggil fungsi linearSearch dan menampilkan hasil pencarian. Deklarasi array dan nilai yang ingin dicari dilakukan pada bagian ini. Hasil output program akan tergantung pada nilai yang ingin dicari. Misalnya, jika kita mencari nilai 10 pada array yang telah diberikan, maka hasil output akan menjadi `Nilai 10 ditemukan pada indeks ke-3`
