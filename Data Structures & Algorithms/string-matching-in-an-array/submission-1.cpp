class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> substrings;
        for (int i{}; i < words.size(); ++i) {
            for (int j{}; j < words.size(); ++j) {
                if (i == j)
                    continue;
                if (is_substring(words[i], words[j])) {
                    substrings.push_back(words[i]);
                    break;
                }
            }
        }
        return substrings;
    }

    bool is_substring(string& sub, string& word) {
        if (word.length() < sub.length())
            return false;
        bool is_sub{};
        for (int i{}; !is_sub and i < word.length() - sub.length() + 1; ++i) {
            is_sub = sub[0] == word[i];
            for (int j{1}; is_sub and j < sub.length(); ++j)
                if (sub[j] != word[j + i])
                    is_sub = false;
        }
        return is_sub;
    }
};