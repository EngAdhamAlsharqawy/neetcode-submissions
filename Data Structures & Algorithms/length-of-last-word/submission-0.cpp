class Solution {
public:
    int lengthOfLastWord(string s) {
        int length{};
        bool is_space{};
        for (char c : s) {
            if (c == ' ')
                is_space = true;
            else
                length = is_space ? 1 : length + 1, is_space = false;
        }
        return length;
    }
};