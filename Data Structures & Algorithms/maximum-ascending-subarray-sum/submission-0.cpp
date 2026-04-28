class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum{ nums[0] };
        for (int i{ 1 }, sum{ nums[0] }; i < nums.size(); ++i) {
            if (nums[i - 1] == nums[i] or nums[i - 1] > nums[i])
                sum = nums[i];
            else
                sum += nums[i];
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};