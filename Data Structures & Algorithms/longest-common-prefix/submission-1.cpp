class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        string prefix;
        for (int i{}; i < strs[0].size(); prefix += strs[0][i++])
            for (const auto& s : strs)
                if (i == s.size() || strs[0][i] != s[i])
                    return prefix;
        return prefix;
    }
};