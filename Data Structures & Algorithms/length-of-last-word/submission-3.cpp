class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;
        while (end >= 0 && s[end] == ' ')
            --end;
        int length{};
        while (end >= 0 && s[end] != ' ')
            ++length, --end;
        return length;
    }
};