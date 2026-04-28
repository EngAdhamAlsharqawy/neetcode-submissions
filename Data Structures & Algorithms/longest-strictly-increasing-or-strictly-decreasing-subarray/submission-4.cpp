class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest{ 1 }, increasing{ 0 }, counter{ 1 };
        for (int i{}; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1])
                increasing = 0, counter = 1;
            else if (nums[i] < nums[i + 1])
                if (increasing == 1)
                    ++counter;
                else
                    increasing = 1, counter = 2;
            else
                if (increasing == -1)
                    ++counter;
                else
                    increasing = -1, counter = 2;
            longest = max(longest, counter);
        }
        return longest;
    }
};