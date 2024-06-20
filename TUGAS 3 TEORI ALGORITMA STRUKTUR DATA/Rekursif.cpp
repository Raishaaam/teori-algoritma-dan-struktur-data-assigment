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