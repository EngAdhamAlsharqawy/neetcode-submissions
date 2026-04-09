class Solution {
public:
    int appendCharacters(string s, string t) {
        int idx_t{};
        for (int i{}; i < s.size() && idx_t < t.size(); ++i)
            if (s[i] == t[idx_t])
                ++idx_t;
        return t.size() - idx_t;
    }
};