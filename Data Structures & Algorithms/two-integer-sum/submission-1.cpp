class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_idx;
        for (int i{}; i < nums.size(); ++i)
            if (nums_idx.contains(target - nums[i]))
                return { nums_idx[target - nums[i]], i };
            else
                nums_idx[nums[i]] = i;
        return {};
    }
};