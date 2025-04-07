#include <bits/stdc++.h>

using namespace std;

string solve(int n, string arr[]) {

    //base case
    if (n == 0)
        return "";

    //kaam
    string result = solve(n / 10, arr);

    int digit = n % 10;
    result += arr[digit] + " ";

    return result;
}

int main() {

    int n;
    cin >> n;

    string arr[] = {
        "Zero",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    string ans = solve(n, arr);
    cout << ans << endl;

    return 0;

}
