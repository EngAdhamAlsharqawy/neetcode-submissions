class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_set<string> usedWords;
        stringstream ss(s);
        int i{}, n = pattern.size();
        for (string word; ss >> word; ++i) {
            if (i == n)
                return false;
            if (charToWord.contains(pattern[i])) {
                if (charToWord[pattern[i]] != word)
                    return false;
            }
            else if (usedWords.contains(word))
                return false;
            usedWords.insert(word);
            charToWord[pattern[i]] = word;
        }
        return i == n;
    }
};