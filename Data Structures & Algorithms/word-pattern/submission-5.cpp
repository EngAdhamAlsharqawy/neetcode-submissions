class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        stringstream ss(s);
        int i{}, n = pattern.size();
        for (string word{}; ss >> word; ++i) {
            if (i == n)
                return false;
            if (charToWord.contains(pattern[i])) {
                if (charToWord[pattern[i]] != word)
                    return false;
            }
            else {
                for (auto [key, val] : charToWord)
                    if (val == word)
                        return false;
                charToWord[pattern[i]] = word;
            }
        }
        return i == n;
    }
};