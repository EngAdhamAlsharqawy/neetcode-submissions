class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> sortedNums{nums};
        sort(sortedNums.begin(), sortedNums.end());
        if (nums == sortedNums)
            return true;
        sort(sortedNums.begin(), sortedNums.end(),
             [](int a, int b) { return a > b; });
        if (nums == sortedNums)
            return true;
        return false;
    }
};