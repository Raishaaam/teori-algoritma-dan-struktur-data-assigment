#include <iostream>
#include <algorithm> 
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

    cout << "Array before sorting: ";
    printArray(array, n);
    selectionSort(array, n);

    cout << "Array after sorting: ";
    printArray(array, n);

    return 0;
}
