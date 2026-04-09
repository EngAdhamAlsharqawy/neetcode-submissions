class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size())
            return false;
        int idx{};
        for (int i{}; idx < s.size() && i < t.size(); ++i) {
            if (s[idx] == t[i]) ++idx;
        }
        return idx == s.size();
    }
};