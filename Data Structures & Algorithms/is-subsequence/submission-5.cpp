class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>> memo(s.size(), vector<int>(t.size(), -1));
        return recursively_check(s, t, memo);
    }

    bool recursively_check(const string& s, const string& t,
                           vector<vector<int>>& memo, int s_idx = 0,
                           int t_idx = 0) {
        if (s_idx == s.size())
            return true;
        if (t_idx == t.size())
            return false;
        if (memo[s_idx][t_idx] != -1)
            return memo[s_idx][t_idx];
        
        bool take = false;
        if (s[s_idx] == t[t_idx])
            take = recursively_check(s, t, memo, s_idx + 1, t_idx + 1);
        bool skip = recursively_check(s, t, memo, s_idx, t_idx + 1);

        return memo[s_idx][t_idx] = take || skip;
    }
};