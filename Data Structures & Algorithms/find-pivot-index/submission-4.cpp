class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_sum(n + 1, 0);
        for (int i{}; i < n; ++i)
            prefix_sum[i + 1] = prefix_sum[i] + nums[i];
        for (int i{}; i < n; ++i)
            if (prefix_sum[i] == (prefix_sum[n] - prefix_sum[i + 1]))
                return i;
        return -1;
    }
};