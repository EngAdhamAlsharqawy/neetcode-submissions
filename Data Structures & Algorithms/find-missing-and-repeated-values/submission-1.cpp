class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> freq(grid.size() * grid.size(), 0);
        for (vector<int>& rows : grid)
            for (int n : rows)
                ++freq[n - 1];
        int a{}, b{};
        for (int i{}; i < freq.size() and !(a and b); ++i)
            if (freq[i] == 2)
                a = i + 1;
            else if (!freq[i])
                b = i + 1;
        return { a,b };
    }
};