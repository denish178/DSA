#include <bits/stdc++.h>

using namespace std;

int findLength(string s, int index) {

    int length = 0;

    if (s[index] == '\0') {
        return length;
    }

    return 1 + findLength(s, index + 1);

}

int main() {

    string s;
    cin >> s;

    int len = findLength(s, 0);
    cout << len << endl;

    return 0;

}
