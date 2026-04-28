class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest{ 1 };
        for (int i{}; i < nums.size() - 1; ++i) {
            int counter{ 1 };
            for (int j{ i + 1 }; j < nums.size(); ++j) {
                if (nums[j - 1] == nums[j] or (nums[i] < nums[i + 1]) != (nums[j - 1] < nums[j]))
                    break;
                ++counter;
            }
            longest = max(longest, counter);
        }
        return longest;
    }
};