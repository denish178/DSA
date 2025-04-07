// LEETCODE 316
class Solution {
public:
    string result = "";

    void solve(string& s, int index, vector<int>& freq, vector<bool>& visited) {
        if (index == s.size()) return;

        char c = s[index];
        freq[c - 'a']--; // decrease count of this character

        // if already visited, skip
        if (visited[c - 'a']) {
            solve(s, index + 1, freq, visited);
            return;
        }

        // remove characters from result if:
        // - current char is smaller
        // - last char in result appears again later
        while (!result.empty() && c < result.back() && freq[result.back() - 'a'] > 0) {
            visited[result.back() - 'a'] = false;
            result.pop_back();
        }

        // add current character and mark it as visited
        result.push_back(c);
        visited[c - 'a'] = true;

        // move forward
        solve(s, index + 1, freq, visited);
    }

    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);

        // count frequency of each character
        for (char c : s) freq[c - 'a']++;

        solve(s, 0, freq, visited);
        return result;
    }
};
