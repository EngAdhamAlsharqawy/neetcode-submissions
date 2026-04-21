class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        for (int i{}; i < strs.front().size(); ++i)
            if (strs.front()[i] != strs.back()[i])
                return strs.front().substr(0, i);
        return strs.front();
    }
};