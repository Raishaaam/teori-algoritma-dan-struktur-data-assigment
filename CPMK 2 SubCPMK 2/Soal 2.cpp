#include <iostream>
#include <algorithm> // for std::swap
using namespace std;

// Function to perform selection sort
void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(array[i], array[minIndex]);
    }
}

// Function to print the array
void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sample array to be sorted
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Array before sorting: ";
    printArray(array, n);

    // Perform selection sort
    selectionSort(array, n);

    cout << "Array after sorting: ";
    printArray(array, n);

    return 0;
}
