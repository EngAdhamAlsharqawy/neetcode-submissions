class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count{};
        for (int left{}, right{}; right < nums.size(); ++right) {
            if (!nums[right])
                left = right + 1;
            max_count = max(max_count, right - left + 1);
        }
        return max_count;
    }
};