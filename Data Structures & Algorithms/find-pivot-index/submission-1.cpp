class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum{}, right_sum{};
        for (int j{ 1 }; j < nums.size(); ++j)
            right_sum += nums[j];
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