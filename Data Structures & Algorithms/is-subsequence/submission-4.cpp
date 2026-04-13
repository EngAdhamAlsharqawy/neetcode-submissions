class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size = s.size(), t_size = t.size();
        vector<vector<int>> captions(t_size + 1, vector<int>(26, t_size));
        for (int i{t_size - 1}; i >= 0; --i) {
            captions[i] = captions[i + 1];
            captions[i][t[i] - 'a'] = i;
        }
        for (int t_idx{}, s_idx{}, next{}; s_idx < s_size; ++s_idx, t_idx = next + 1) {
            next = captions[t_idx][s[s_idx] - 'a'];
            if (next == t_size)
                return false;
        }
        return true;
    }
};