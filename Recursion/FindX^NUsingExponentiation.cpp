#include <bits/stdc++.h>

using namespace std;

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    int halfsq = power(x, n / 2);

    if (n % 2 == 0) {
        return halfsq * halfsq;
    }
    else {
        return x * halfsq * halfsq;
    }
}

int main() {

    int x, n;
    cin >> x >> n;

    int ans = power(x, n);
    cout << ans << endl;

    return 0;
}

// Time Complexity,	Space Complexity

// Fast Exponentiation	O(log n),	O(log n)
