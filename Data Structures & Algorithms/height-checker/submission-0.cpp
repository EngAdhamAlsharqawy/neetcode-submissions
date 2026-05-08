class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ordered_heights{ heights };
        sort(ordered_heights.begin(), ordered_heights.end());
        int counter{};
        for (int i{}; i < heights.size(); ++i)
            counter += ordered_heights[i] != heights[i];
        return counter;
    }
};