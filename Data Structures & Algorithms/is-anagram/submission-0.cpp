class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> char_frequency;
        for (char c : s)
            ++char_frequency[c];
        for (char c : t)
            --char_frequency[c];
        for (auto c : char_frequency)
            if (c.second)
                return false;
        return true;
    }
};