class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        for (int i{}; i < strs[0].size(); ++i)
            for (const auto& s : strs)
                if (i == s.size() || strs[0][i] != s[i])
                    return strs[0].substr(0, i);
        return strs[0];
    }
};