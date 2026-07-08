class Solution {
public:
    bool isPalindrome(string s) {
        for (int l{}, r = s.size() - 1; l < r; ++l, --r) {
            while (l < r and !isalnum(s[l]))
                ++l;
            while (l < r and !isalnum(s[r]))
                --r;
            if (tolower(s[l]) != tolower(s[r]))
                return false;
        }
        return true;
    }
};