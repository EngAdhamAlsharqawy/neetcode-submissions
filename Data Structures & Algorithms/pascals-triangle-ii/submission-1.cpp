class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (!rowIndex)
            return { 1 };
        vector<int> prevRow{ getRow(rowIndex - 1) };
        vector<int> row{ 1 };
		for (int i = 1; i < prevRow.size(); ++i)
			row.push_back(prevRow[i - 1] + prevRow[i]);
        row.push_back(1);
        return row;
    }
};