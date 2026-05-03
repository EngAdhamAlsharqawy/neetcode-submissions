class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> freq;
        for (vector<int>& rows : grid)
            for (int n : rows)
                ++freq[n];
        int a{}, b{};
        for (int i{ 1 }; i <= grid.size() * grid.size() and !(a and b); ++i)
            if (freq[i] == 2)
                a = i;
            else if (!freq[i])
                b = i;
        return { a,b };
    }
};