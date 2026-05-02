class NumArray {
    vector<int> prefix_sums;
public:
    NumArray(vector<int>& nums) {
        prefix_sums.push_back(nums[0]);
        for (int i{ 1 }; i < nums.size(); ++i)
            prefix_sums.push_back(prefix_sums[i - 1] + nums[i]);
    }

    int sumRange(int left, int right) {
        if (!left) return prefix_sums[right];
        return prefix_sums[right] - prefix_sums[left - 1];
    }
};