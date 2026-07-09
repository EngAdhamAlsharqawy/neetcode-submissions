class Solution {
public:
    bool validPalindrome(string s) {
        for (int l = 0, r = s.size() - 1; l < r; ++l, --r)
            if (s[l] != s[r])
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
        return true;
    }
private:
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r)
            if (s[l++] != s[r--])
                return false;
            return true;
        }
    };