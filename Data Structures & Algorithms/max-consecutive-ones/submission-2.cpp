class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count{}, count{};
        for (int n : nums)
            count = n ? count + 1 : 0, max_count = max(max_count, count);
        return max_count;
    }
};