class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> freq(grid.size() * grid.size(), 0);
        for (vector<int>& rows : grid)
            for (int n : rows)
                ++freq[n - 1];
        vector<int> ans(2);
        for (int i{}; i < freq.size(); ++i)
            if (freq[i] == 2)
                ans[0] = i + 1;
            else if (!freq[i])
                ans[1] = i + 1;
        return ans;
    }
};