class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size = s.size(), t_size = t.size();
        vector <vector<bool>> dp(s_size + 1, vector<bool>(t_size + 1, false));
        for (int t_idx{}; t_idx <= t_size; ++t_idx)
            dp[s_size][t_idx] = true;
        for (int s_idx{ s_size - 1 }; s_idx >= 0; --s_idx)
            for (int t_idx{ t_size - 1 }; t_idx >= 0; --t_idx)
                dp[s_idx][t_idx] = s[s_idx] == t[t_idx] ? dp[s_idx + 1][t_idx + 1] : dp[s_idx][t_idx + 1];
        return dp[0][0];
    }
};