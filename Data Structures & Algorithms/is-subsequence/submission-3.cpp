class Solution {
public:
    bool isSubsequence(string s, string t, int s_idx = 0, int t_idx = 0) { 
        if (s_idx == s.size()) return true;
        if (t_idx == t.size()) return false;
        return isSubsequence(s, t, (s[s_idx] == t[t_idx] ? s_idx + 1 : s_idx), t_idx + 1);
    }
};