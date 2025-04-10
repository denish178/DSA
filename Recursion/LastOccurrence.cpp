#include <bits/stdc++.h>
using namespace std;

int findKeyIndex(int arr[], int i, int size, int key) {
    if (i < 0) {
        return -1;  // Reached end and not found
    }

    if (arr[i] == key) {
        return i;
    }

    return findKeyIndex(arr, i - 1, size, key);  // Recursive call
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int key = 9;

    int size = sizeof(arr) / sizeof(arr[0]);
    int index = findKeyIndex(arr, size-1, size, key);

    if (index != -1) {
        cout << "Last occurrence of " << key << " is found at index " << index << endl;
    } else {
        cout << "Key " << key << " is not found" << endl;
    }

    return 0;
}
//Same as first occurrence
