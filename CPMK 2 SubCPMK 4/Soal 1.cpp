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