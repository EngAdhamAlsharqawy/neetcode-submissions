class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest_inc{ 1 }, longest_dec{ 1 };
        for (int i{}, counter_inc{ 1 }, counter_dec{ 1 }; i < nums.size() - 1; ++i) {
            if (nums[i] < nums[i + 1]) {
                counter_dec = 1;
                ++counter_inc;
                longest_inc = max(longest_inc, counter_inc);
            }
            else if (nums[i] > nums[i + 1]) {
                counter_inc = 1;
                ++counter_dec;
                longest_dec = max(longest_dec, counter_dec);
            }
            else
                counter_inc = counter_dec = 1;
        }
        return max(longest_inc, longest_dec);
    }
};