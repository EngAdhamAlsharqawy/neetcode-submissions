class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        for (int i{}, j{}; i < word.size() && j < abbr.size(); ++i, ++j) {
            int length{};
            if (abbr[j] == '0')
                return false;
            while ('0' <= abbr[j] && abbr[j] <= '9')
                length = length * 10 + (abbr[j++] - '0');
            if (word.size() - i < length)
                return false;
            i += length;
            if (word[i] != abbr[j])
                return false;
        }
        return true;
    }
};