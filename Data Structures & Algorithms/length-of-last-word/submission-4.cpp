class Solution {
public:
    int lengthOfLastWord(string s) {
        int length{};
        for (int i{}; i < s.size(); ++i) {
            if (s[i] != ' ')
                ++length;
            else {
                while (i < s.size() && s[i] == ' ')
                    ++i;
                if (i == s.size())
                    return length;
                length = 1;
            }
        }
        return length;
    }
};