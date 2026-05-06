class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> charToWord;
        unordered_map<string, int> wordToChar;
        stringstream ss(s);
        int i{}, n = pattern.size();
        for (string word; ss >> word; ++i)
            if (i == n or charToWord[pattern[i]] != wordToChar[word])
                return false;
            else
                charToWord[pattern[i]] = wordToChar[word] = i + 1;
        return i == n;
    }
};