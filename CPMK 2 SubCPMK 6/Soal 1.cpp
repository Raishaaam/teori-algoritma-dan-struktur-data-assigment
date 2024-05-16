#include <iostream>
using namespace std;

const int maksimal = 5;
string arrayBunga[maksimal];
int top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBunga(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBunga[top++] = data;
    }
}

void popArrayBunga() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBunga[--top] = "";
    }
}

void peekArrayBunga(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else if (posisi <= top) {
        cout << "Posisi ke " << posisi << " adalah " << arrayBunga[top - posisi] << endl;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBunga(int posisi, string data) {
    if (posisi <= top) {
        arrayBunga[top - posisi] = data;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

void destroyArraybunga() {
    while (!isEmpty()) {
        popArrayBunga();
    }
}

void cetakArrayBunga() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBunga[i] << endl;
        }
    }
}

int main() {
    pushArrayBunga("Mawar");
    pushArrayBunga("Lavender");
    pushArrayBunga("Jasmine");
    pushArrayBunga("Tulip");
    pushArrayBunga("Orchid");

    cetakArrayBunga();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBunga(2);
    popArrayBunga();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBunga(2, "Anggrek");
    cetakArrayBunga();

    cout << "\n";
    destroyArraybunga();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBunga();

    return 0;
}