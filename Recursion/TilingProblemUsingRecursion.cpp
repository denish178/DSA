#include <bits/stdc++.h>

using namespace std;

int tilingProblem(int n) {
    // 2 x n (floor size)

    //base case 
    if (n == 0 || n == 1) return 1;

    //process
    int verticalWays = tilingProblem(n - 1);
    int horizontalWays = tilingProblem(n - 2);
    int totalWays = verticalWays + horizontalWays;

    return totalWays;

}

int main() {
    // your code goes here
    int n;
    cin >> n;

    int ans = tilingProblem(n);
    cout << ans << endl;

    return 0;

}

// Time Complexity	O(2^n)
// Space Complexity	O(n)
