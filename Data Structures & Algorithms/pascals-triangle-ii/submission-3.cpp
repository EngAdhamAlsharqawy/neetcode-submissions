class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> curRow{ 1 };
        for (int i{ 1 }; i <= rowIndex; ++i) {
            vector<int> nextRow(i + 1, 0);
            for (int j{}; j < i; ++j)
                nextRow[j] += nextRow[j + 1] += curRow[j];
            curRow = nextRow;
        }
        return curRow;
    }
};