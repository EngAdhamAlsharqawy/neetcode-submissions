class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (!rowIndex)
            return { 1 };

        vector<int> prev{ getRow(rowIndex - 1) };
        vector<int> prevRow{ 0 };
        prevRow.insert(prevRow.end(), prev.begin(), prev.end());
        prevRow.push_back(0);

        vector<int> row;
		for (int i = 1; i < prevRow.size(); ++i)
			row.push_back(prevRow[i - 1] + prevRow[i]);
        return row;
    }
};