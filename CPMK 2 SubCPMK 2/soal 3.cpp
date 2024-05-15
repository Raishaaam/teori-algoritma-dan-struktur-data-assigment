#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

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