class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest{ 1 };
        for (int i{}, inc{ 1 }, dec{ 1 }; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1])
                inc = dec = 1;
            else if (nums[i] < nums[i + 1])
                ++inc, dec = 1;
            else
                ++dec, inc = 1;
            longest = max(longest, max(inc, dec));
        }
        return longest;
    }
};