class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle(numRows);
        for (int i{}; i < numRows; ++i) {
            if (i == 0)
                pascal_triangle[i] = { 1 };
            else if (i == 1)
                pascal_triangle[i] = { 1,1 };
            else {
                pascal_triangle[i].push_back(1);
                for (int j{}; j < i - 1; ++j)
                    pascal_triangle[i].push_back(pascal_triangle[i - 1][j] + pascal_triangle[i - 1][j + 1]);
                pascal_triangle[i].push_back(1);
            }
        }
        return pascal_triangle;
    }
};