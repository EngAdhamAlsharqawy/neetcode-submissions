class Solution {
public:
    int lengthOfLastWord(string s) {
        int length{};
        bool in_word{};
        for (char c : s) {
            if (c == ' ')
                in_word = false;
            else
                length = in_word ? length + 1 : 1 , in_word = true;
        }
        return length;
    }
};