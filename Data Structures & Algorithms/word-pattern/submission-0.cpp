class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string current;
        for (int i = 0; i < s.size(); ++i)
            if (s[i] != ' ')
                current += s[i];
            else
                words.push_back(current), current.clear();
        words.push_back(current);
        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> pattern_map;
        unordered_map<string, char> words_map;
        for (int i{}; i < words.size(); ++i) {
            if (!pattern_map.contains(pattern[i]))
                pattern_map[pattern[i]] = words[i];
            else if (pattern_map[pattern[i]] != words[i])
                return false;
            if (!words_map.contains(words[i]))
                words_map[words[i]] = pattern[i];
            else if (words_map[words[i]] != pattern[i])
                return false;
        }
        return true;
    }
};