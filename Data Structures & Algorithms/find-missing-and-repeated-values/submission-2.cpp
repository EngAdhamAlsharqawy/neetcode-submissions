class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int a{}, b{};
        for (int i{ 1 }; i <= n * n and !(a and b); ++i) {
            int counter{};
            for (vector<int>& rows : grid)
                for (int n : rows)
                    counter += i == n;
            if (counter == 2)
                a = i;
            else if (!counter)
                b = i;
        }
        return { a,b };
    }
};