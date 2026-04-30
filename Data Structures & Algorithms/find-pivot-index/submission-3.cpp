class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total{};
        for (int n : nums)
            total += n;
        int left_sum{}, right_sum{ total - nums[0] };
        for (int i{}; i < nums.size(); ++i) {
            if (left_sum == right_sum)
                return i;
            left_sum += nums[i];
            if (i != nums.size() - 1)
                right_sum -= nums[i + 1];
        }
        return -1;
    }
};