class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing{ true };
        for (int i{ 1 }; isIncreasing and i < nums.size(); ++i)
            if (nums[i] < nums[i - 1])
                isIncreasing = false;
        if (isIncreasing)
            return true;
        for (int i{ 1 }; i < nums.size(); ++i)
            if (nums[i] > nums[i - 1])
                return false;
        return true;
    }
};