#include <bits/stdc++.h>
using namespace std;

void isSorted(int arr[], int i, int n) {
    if(i == n - 1) {
        cout << "Array is sorted" << endl;
        return;
    }

    if(arr[i] > arr[i+1]) {
        cout << "Array is not sorted" << endl;
        return;  // Important: return here to stop further checks
    } else {
        isSorted(arr, i + 1, n);
    }
}

int main() {
    int arr[] = {2, 4, 5, 6, 7};  // Try changing this array
    int n = sizeof(arr) / sizeof(arr[0]);

    isSorted(arr, 0, n);

    return 0;
}
//TIME COMP :- O(N)
//SPACE COMP :- O(N)
