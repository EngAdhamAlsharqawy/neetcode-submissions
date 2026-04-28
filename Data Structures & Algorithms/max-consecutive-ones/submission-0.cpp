class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count{};
        for (int i{}, count{}; i < nums.size(); ++i)
            count = nums[i] ? count + 1 : 0, max_count = max(max_count, count);
        return max_count;
    }
};