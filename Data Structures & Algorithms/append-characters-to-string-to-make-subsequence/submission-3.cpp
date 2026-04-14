class Solution {
public:
    int appendCharacters(string s, string t) {
        vector<vector<int>> jump_table(s.size() + 1, vector<int>(26, -1));
        for (int i = s.size() - 1; i > -1; --i) {
            jump_table[i] = jump_table[i + 1];
            jump_table[i][s[i] - 'a'] = i;
        }

        int t_idx{};
        for (int i{}, check{}; i < s.size() && t_idx < t.size(); ++t_idx, i = check + 1) {
            check = jump_table[i][t[t_idx] - 'a'];
            if (check == -1)
                break;
        }
        return t.size() - t_idx;
    }
};