class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle;
        for (int n{}; n < numRows; ++n) {
            vector<int> row{ 1 };
            for (int k{ 1 }; k <= n; ++k)
                row.push_back(row.back() * (n - k + 1) / k);
            pascal_triangle.push_back(row);
        }
        return pascal_triangle;
    }
};