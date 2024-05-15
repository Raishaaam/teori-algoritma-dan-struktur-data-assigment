#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string kalimat) {
    int i = 0;
    int j = kalimat.length() - 1;
    while (i < j) {
        if (kalimat[i] != kalimat[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    if (isPalindrom(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom" << endl;
    }

    return 0;
}