#include <iostream>
using namespace std;

bool cekDuplikat(int arr[]) {
    for(int i = 0; i < 4; ++i)
        for(int j = i + 1; j < 4; ++j)
            if(arr[i] == arr[j])
                return true;
    return false;
}

int main() {
    int arrA[] = {2, 1, 3, 1};
    cout << cekDuplikat(arrA);
    return 0;
}
