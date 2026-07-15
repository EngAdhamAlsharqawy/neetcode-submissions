class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i{};
        for (int j{}; i < g.size() && j < s.size(); ++j)
            if (g[i] <= s[j])
                ++i;
        return i;
    }
};