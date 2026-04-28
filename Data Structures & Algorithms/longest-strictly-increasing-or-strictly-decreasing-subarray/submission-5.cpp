class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest{ 1 }, counter{ 1 };
        for (int i{ 1 }; i < nums.size(); ++i) {
            if (nums[i - 1] == nums[i] or (nums[i - counter] < nums[i - counter + 1]) != (nums[i - 1] < nums[i]))
                counter = nums[i - 1] == nums[i] ? 0 : 1;
            ++counter;
            longest = max(longest, counter);
        }
        return longest;
    }
};