class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i{}; i < nums.size(); ++i) {
            int left_sum{}, right_sum{};
            for (int j{}; j < i; ++j)
                left_sum += nums[j];
            for (int j = nums.size() - 1; i < j; --j)
                right_sum += nums[j];
            if (left_sum == right_sum)
                return i;
        }
        return -1;
    }
};