class NumArray {
    vector<int> prefix_sums;
public:
    NumArray(vector<int>& nums) {
        prefix_sums = vector<int>(nums.size() + 1, 0);
        for (int i{}; i < nums.size(); ++i)
            prefix_sums[i + 1] = prefix_sums[i] + nums[i];
    }

    int sumRange(int left, int right) {
        return prefix_sums[right + 1] - prefix_sums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */