class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2)
            return {};
        unordered_map<int, vector<int>> nums_idx;
        for (int i{}; i < nums.size(); ++i)
            nums_idx[nums[i]].push_back(i);

        for (int i{}; i < nums.size(); ++i) {
            int rem{target - nums[i]};
            if (nums_idx.contains(rem))
                for (int idx : nums_idx[rem])
                    if (idx != i)
                        return {i, idx};
        }
        return {};
    }
};