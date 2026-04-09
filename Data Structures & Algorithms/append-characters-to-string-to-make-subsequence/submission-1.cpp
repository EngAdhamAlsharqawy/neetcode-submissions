class Solution {
public:
    int appendCharacters(string s, string t) {
        int idx_t{}, append{ int(t.size()) };
        for (int i{}; i < s.size() && idx_t < t.size(); ++i)
            if (s[i] == t[idx_t])
                ++idx_t, --append;
        return append;
    }
};