class Solution {
public:
    bool isPalindrome(string s) {
        string valid_s;
        for (char c : s)
            if (isalnum(c))
                valid_s += tolower(c);
        return valid_s == string(valid_s.rbegin(), valid_s.rend());
    }
};