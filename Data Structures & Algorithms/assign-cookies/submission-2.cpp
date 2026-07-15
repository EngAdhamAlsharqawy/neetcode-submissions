class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()), sort(s.begin(), s.end());
        int i{}, j{}; 
        while (i < g.size() && j < s.size())
            i += g[i] <= s[j], ++j;
        return i;
    }
};