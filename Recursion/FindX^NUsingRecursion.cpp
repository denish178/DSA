#include <bits/stdc++.h>

using namespace std;

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);
}

int main() {

    int x, n;
    cin >> x >> n;

    int ans = power(x, n);
    cout << ans << endl;

    return 0;
}
// Time Complexity,	Space Complexity
// O(n),	O(n)
