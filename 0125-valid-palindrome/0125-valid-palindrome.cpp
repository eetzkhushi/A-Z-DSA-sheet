class Solution {
public:
    bool check(int i, string& clean) {
        if (i >= clean.size() / 2) return true;
        if (clean[i] != clean[clean.size() - i - 1]) return false;
        return check(i + 1, clean);
    }

    bool isPalindrome(string s) {
        string clean = "";
        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }
        return check(0, clean);
    }
};
