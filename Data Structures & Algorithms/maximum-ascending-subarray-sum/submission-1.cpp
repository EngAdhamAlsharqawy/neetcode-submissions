class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum{};
        for (int i{}, sum{}; i < nums.size(); ++i) {
            sum = nums[i];
            for (int j{ i + 1 }; j < nums.size(); ++j)
                if (!(nums[j - 1] < nums[j]))
                    break;
                else
                    sum += nums[j];
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};