Teori Alpro
# <h1 align="center">CPMK 2 - SubCPMK 3</h1>
<p align="center">2311110002 / Raisha  Amalia / Sains Data</p>

## Soal

### 1. Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct! 

Struct adalah koleksi dari variabel yang dinyatakan dengan sebuah nama, dengan sifat setiap variabel dapat memiliki tipe yang berlainan. Suatu struct adalah pengelompokkan dari variabel-variabel yang berada dalam satu nama yang sama. Suatu struct dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama tetapi berkaitan. Salah satu tipe data terstruktur (structure data type) bentukannya terdiri dari beberapa elemen yang disebut field. Setiap field menggambarkan informasi tertentu dan tipe field sudah dikenal baik itu tipe data dasar atau tipe data bentukan lainnya.
Struct data adalah sebuah skema organisasi yang diterapkan pada data sehingga data dapat diinterprestasikan dan sehingga operasi-operasi spesifik dapat dilaksanakan pada data tersebut[4]. Struct bermanfaat untuk mengelompokkan sejumlah data dengan tipe yang berlainan. Masing –masing tipe elemen struktur dapat berlainan. Adapun variabel struktur menyatakan bahwa variabel struktur yang dideklarasikan bisa lebih dari satu dan dipisahkan dengan tanda titik koma.

### 2. Contoh Program dari Struck.

```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur bunga
struct bunga {
  string namaBunga;
  string jenisBunga;
  string warnaBunga;
  int stokBunga;
  string asalBunga;
};

int main() {
  // Mendeklarasikan variabel favorit dengan tipe bunga
  bunga favorit;

  // Mengisi data ke dalam variabel favorit
  favorit.namaBunga = "Lily";
  favorit.jenisBunga = "Wood Lily";
  favorit.warnaBunga = "Merah";
  favorit. stokBunga = 34;
  favorit.asalBunga = "Amerika Utara";

  // Menampilkan informasi bunga favorit
  cout << "\tBunga Favorit Saya" << endl;
  cout << "\tNama Bunga : " << favorit.namaBunga << endl;
  cout << "\tJenis Bunga : " << favorit.jenisBunga << endl;
  cout << "\tWarna Bunga : " << favorit.warnaBunga << endl;
  cout << "\tJumlah Bunga: " << favorit.stokBunga << " Bunga" << endl;
  cout << "\tAsal Bunga : " << favorit.asalBunga << endl;

  return 0;
}
````
### Output :
![image](https://github.com/Raishaaam/teori-algoritma-dan-struktur-data-assigment/assets/161957283/7677ed29-4a84-43ff-a50e-4a3f097c351f)

Program ini mendefinisikan struktur `bunga` dengan beberapa variabel untuk menyimpan informasi tentang bunga, yaitu `namaBunga`, `jenisBunga`, `warnaBunga`, `stokBunga`, dan `asalBunga`. Di dalam fungsi `main`, variabel `favorit` dideklarasikan sebagai tipe `bunga`dan diisi dengan beberapa informasi tentang bungan favorit. Kemudian, informasi tersebut ditampilkan menggunakan perintah `cout`. Hasil output dari program ini akan menampilkan informasi bunga favorit. Dalam output, dapat dilihat bahwa nama bunga favoritnya adalah Lily, jenis bunganya adalah Wood Lily, warna bunga adalah merah, jumlah stok bunga adalah 34 bunga, dan asal bunga Amerika Utara.