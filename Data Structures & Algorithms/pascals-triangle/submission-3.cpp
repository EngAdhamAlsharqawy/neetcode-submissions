class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle(numRows);
        for (int i{}; i < numRows; ++i) {
            vector<int>& row{ pascal_triangle[i] };
            row.resize(i + 1);
            row[0] = row[i] = 1;
            for (int j{ 1 }; j < i; ++j)
                row[j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
        }
        return pascal_triangle;
    }
};