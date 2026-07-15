class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i{}, j{};
        while (i < word.size() && j < abbr.size()) {
            int length{};
            if (abbr[j] == '0')
                return false;
            while (j < abbr.size() && isdigit(abbr[j]))
                length = length * 10 + (abbr[j++] - '0');
            i += length;
            if (word.size() < i)
                return false;
            if (word.size() == i && abbr.size() == j)
                return true;
            else if (word.size() == i || abbr.size() == j)
                return false;
            if (word[i] != abbr[j])
                return false;
            ++i, ++j;
        }
        return i == word.size() && j == abbr.size();;
    }
};