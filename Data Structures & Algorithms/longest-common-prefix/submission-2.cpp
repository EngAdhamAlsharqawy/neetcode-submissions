class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        string prefix{ strs[0] };
        for (const string& s : strs) {
            int i{};
            for (; i < min(prefix.size(), s.size()); ++i)
                if (prefix[i] != s[i]) break;
            prefix = prefix.substr(0, i);
        }
        return prefix;
    }
};