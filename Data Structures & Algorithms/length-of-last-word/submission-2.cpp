class Solution {
public:
    int lengthOfLastWord(string s) {
        int length{};
        bool is_new{};
        for (char c : s)
            if (c == ' ') is_new = true;
            else length = is_new ? 1 : length + 1, is_new = false;
        return length;
    }
};