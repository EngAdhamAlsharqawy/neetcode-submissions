class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> seen;
        seen.reserve(n * n);
        int a{};
        for (int i{}; i < n; ++i)
            for (int j{}; j < n; ++j)
                if (!seen.insert(grid[i][j]).second)
                    a = grid[i][j];
        int b{};
        for (int i{ 1 }; i <= n * n and !b; ++i)
            if (!seen.contains(i))
                b = i;
        return { a,b };
    }
};