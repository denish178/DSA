#include <bits/stdc++.h>

using namespace std;


int fibonaci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;


    return fibonaci(n - 1) + fibonaci(n - 2);
}

int main() {

    int n;
    cin >> n;

    int fib = fibonaci(n);
    cout << fib << endl;

    return 0;
}
//TIME COMP :- O(2^N)
//SPACE COMP :- O(N)
