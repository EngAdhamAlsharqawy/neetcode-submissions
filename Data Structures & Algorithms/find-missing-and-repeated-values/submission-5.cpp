class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> seen;
        seen.reserve(n * n);
        int a{};
        for (vector<int>& rows : grid)
            for (int n : rows)
                if (!seen.insert(n).second)
                    a = n;
        int b{};
        for (int i{ 1 }; i <= n * n and !b; ++i)
            if (!seen.contains(i))
                b = i;
        return { a,b };
    }
};