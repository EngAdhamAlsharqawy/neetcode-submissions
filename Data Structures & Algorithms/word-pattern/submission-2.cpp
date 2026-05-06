class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while (ss >> word)
            words.push_back(word);
        if (pattern.length() != words.size())
            return false;

        unordered_map<char, int> charToWord;
        unordered_map<string, int> wordToChar;
        for (int i{}; i < pattern.length(); i++) {
            char c{ pattern[i] };
            string& w{ words[i] };
            if (charToWord[c] != wordToChar[w])
                return false;
            charToWord[c] = wordToChar[w] = i + 1;
        }
        return true;
    }
};