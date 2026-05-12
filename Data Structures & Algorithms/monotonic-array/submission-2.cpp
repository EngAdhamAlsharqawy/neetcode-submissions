class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        for (int i{ 1 }; i < nums.size(); ++i)
            if (nums[i] < nums[i - 1])
                goto decreasing;
        return true;
    decreasing:
        for (int i{ 1 }; i < nums.size(); ++i)
            if (nums[i] > nums[i - 1])
                return false;
        return true;
    }
};