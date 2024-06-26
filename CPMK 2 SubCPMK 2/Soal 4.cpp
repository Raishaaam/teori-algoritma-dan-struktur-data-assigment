#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fungsi untuk menggabungkan dan mengurutkan dua array terurut
vector<int> mergeAndSortArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> mergedArray;
    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(mergedArray));
    sort(mergedArray.begin(), mergedArray.end());
    return mergedArray;
}

int main() {
    // Array terurut A dengan ruang tambahan
    vector<int> A = {1, 3, 5, 7, 9};

    // Array terurut B
    vector<int> B = {2, 4, 6, 8, 10};

    // Menggabungkan dan mengurutkan array B ke array A
    vector<int> mergedArray = mergeAndSortArrays(A, B);

    // Menampilkan array A
    cout << "Array A: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    // Menampilkan array B
    cout << "Array B: ";
    for (int num : B) {
        cout << num << " ";
    }
    cout << endl;

    // Menampilkan gabungan array tanpa duplikat
    cout << "Gabungan Array : ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}