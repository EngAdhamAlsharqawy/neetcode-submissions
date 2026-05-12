class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing{ true }, decreasing{ true };
        for (int i{ 1 }; (increasing or decreasing) and i < nums.size(); ++i)
            if (nums[i] < nums[i - 1])
                increasing = false;
            else if (nums[i] > nums[i - 1])
                decreasing = false;
        return increasing or decreasing;
    }
};