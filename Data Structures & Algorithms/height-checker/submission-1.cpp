class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101, 0);
        for (int h : heights)
            ++freq[h];

        vector<int> expected;
        for (int i{}; i < freq.size(); ++i)
            while (freq[i]--)
                expected.push_back(i);

        int counter{};
        for (int i{}; i < heights.size(); ++i)
            counter += expected[i] != heights[i];
        return counter;
    }
};