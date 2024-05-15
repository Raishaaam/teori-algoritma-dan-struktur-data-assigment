Teori Alpro
# <h1 align="center">CPMK 2 - SubCPMK 2</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Soal

### 1. Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

1. Bubble Sort

Bubble Sort adalah algoritma sorting yang sederhana yang dilakukan secara berulang-ulang memeriksa pasangan elemen yang berdekatan dan menukar mereka jika mereka dalam urutan yang salah. Proses ini diulangi hingga mencapai akhir list. Proses ini diulangi hingga tidak ada lagi perubahan yang dibutuhkan, menunjukkan bahwa list tersebut telah terurut. Berikut adalah alur Bubble Sort:
1. Mulai dari elemen pertama dan bandingkan dengan elemen  elemen berikutnya.
2. Jika elemen pertama lebih besar dari elemen berikutnya, maka ganti posisi mereka.
3. Ulangi langkah 1 dan 2 untuk semua elemen dalam array.
4. Berhenti jika tidak ada ganti posisi yang terjadi dalam iterasi, artinya array sudah terurut.

Runtime:
1. `best case` untuk Bubble Sort adalah `O(n)` ketika array input terurut. Hal ini karena algoritma hanya perlu melakukan suatu kali perjalanan melalui list untuk memastikan array tetap terurut.
2. `worst case` untuk Bubble Sort adalah `O(n^2)` ketika array tidak terurut, Bubble Sort harus melakukan iterasi yang lebih banyak untuk memastikan array terurut, sehingga runtime menjadi `O(n^2)`

2. Selection Sort

Selection Sort adalah algoritma pengurutan yang menggunakan perbandingan dan penggantian elemen dalam array untuk mengurutkan data. Proses pengurutan dilakukan dengan cara:
1. Menemukan elemen terkecil dalam bagian yang belum terurut dari array. 
2. Menggantikan elemen terkecil dengan elemen pertama dari bagian yang belum terurut.
3. Proses ini diulangi untuk semua elemen array, kecuali elemen terakhir yang telah terurut.
4. Langkah 1-3 dapat diulangi hingga tidak ada lagi perubahan dalam array yang menunjukkan bahwa array telah terurut.

Runtime:
1. `bast case` untuk Selection Sort adalah `O(*n*^2*)`, karena dalam best case , array tidak terurut dan perlu dilakukan perbandingan dan penggantian elemen untuk semua pasangan elemen dalam array.
2. `worst case` untuk Selection Sort adalah `O(*n*^2*)`, karena dalam kasus terburuk, array tidak terurut dan perlu dilakukan perbandingan dan penggantian elemen untuk semua pasangan elemen yang ada pada array.

3. Merge Sort

Merge Sort adalah algoritma pengurutan yang menggunakan strategi divide and conquer untuk mengurutkan data. Proses pengurutan dilakukan dengan cara:
1. Membagi array menjadi dua bagian yang sama besar.
2. Mengurutkan masing masing bagian secara rekursif.
3. Menggabungkan dua bagian yang telah terurut menjadi satu array yang terurut.

Runtime:
1. `best case` untuk Merge Sort adalah `O(*n* log(*n*))`, array dapat dibagi secara efisien dan pengurutan dilakukan secara rekursif.
2. `worst case` untuk Merge Sort adalah `O(*n* log(*n*))`, array tidak dapat dibagi secara efisien dan pengurutan dilakukan secara rekursif.


### 2. Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut

```C++
#include <iostream>

using namespace std;

void selectionSort(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }
    swap(array[i], array[minIndex]);
  }
}

void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int array[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(array) / sizeof(array[0]);

  cout << "Array sebelum diurutkan: ";
  printArray(array, n);

  selectionSort(array, n);

  cout << "Array setelah diurutkan: ";
  printArray(array, n);

  return 0;
}
````

Program ini merupakan implementasi algoritma pengurutan selection sort. Pada program ini terdiri dari dua fungsi, yaitu `selectionSort` yang melakukan pengurutan array menggunakan algoritma selection sort dan `printArray` yang mencetak isi array pada output. Dalam fungsi `main`, program membuat sebuah array dengan 7 elemen, mencetak isi array sebelum diurutkan, kemudian memanggil fungsi `selectinSort` untuk melakukan pengurutan, dan akhirnya mencetak isi array setelah diurutkan.

### 3. Tulislah sebuah fungsi untuk mensorting dan mengecek dua buah array of strings, sehingga menghasilkan “anagram” dan “tidak anagram” (30 poin) contoh Input string1 = “bahu” string2 = “buah” Output: “anagram” Input string1 = “makan” string2 = “minum” Output: “tidak anagram”

~~~C++
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string str1, string str2) {
    // Sorting both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Comparing sorted strings
    if(str1 == str2) {
        return true;
    } else {
        return false;
    }
}

void checkAnagram(vector<string> arr1, vector<string> arr2) {
    if(arr1.size() != arr2.size()) {
        cout << "Tidak anagram" << endl;
        return;
    }

    for(int i = 0; i < arr1.size(); i++) {
        if(isAnagram(arr1[i], arr2[i])) {
            cout << arr1[i] << " dan " << arr2[i] << " adalah anagram" << endl;
        } else {
            cout << arr1[i] << " dan " << arr2[i] << " tidak anagram" << endl;
        }
    }
}

int main() {
    vector<string> arr1 = {"bahu", "makan", "siang"};
    vector<string> arr2 = {"buah", "minum", "gantung"};

    checkAnagram(arr1, arr2);

    return 0;
}
~~~

Program ini digunakan untuk mengecek apakah dua buah array of strings memiliki sebuah kemiripan karakter atau tidak. Program ini terdiri dari beberapa bagian, yaitu definisi fungsi `isAnagram` dan `checkAnagram`, serta bagian `main` yang digunakan sebagai peran utama untuk menjalankan program. 

Fungsi `isAnagram` digunakan untuk mengecek apakah dua buah string adalah anagram atau tidak. Anagram merupakan kata atau kalimat yang memiliki susunan karakter yang sama, tetapi bentuk dan artinya berbeda. Untuk mengecek kemiripan karakter, fungsi ini mengurutkan karakter-karakter pada kedua buah string menggunakan fungsi `sort` dari library `<algorithm>`. Setelah itu, fungsi akan membandingkan kedua string yang telah diurutkan. Jika kedua string sama, maka fungsi akan mengembalikan nilai true dan artinya kedua string adalah anagram. Jika tidak, maka akan dikembalikan nilai false. Lalu terdapat fungsi `checkAnagram` yang berfungsi untuk memeriksa apakah kedua buah array memiliki kemiripan karakter atau tidak. Fungsi ini akan membandingkan setiap elemen pada kedua buah array

