#include <bits/stdc++.h>

using namespace std;

int solve(string s, int start, int end) {

    //base cases
    if (start == s.length()) {
        return 0;
    }
    if (end == s.length()) {
        return solve(s, start + 1, start + 1);
    }

    //process
    int count = 0;
    if (s[start] == s[end]) {
        count = 1;
    }

    return count + solve(s, start, end + 1);
}

int main() {

    string s;
    cin >> s;

    int countOfContinousSubstring = solve(s, 0, 0);
    cout << countOfContinousSubstring << endl;

    return 0;

}
