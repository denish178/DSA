#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, string src, string helper, string dest) {
    if (n == 1) {
        cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, dest, helper);
    cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, src, dest);
}

int main() {

    int n;
    cin >> n;

    towerOfHanoi(n, "s", "h", "d");

    return 0;
}

// Metric	Complexity
// Time Complexity	O(2^n)
// Space Complexity	O(n)
