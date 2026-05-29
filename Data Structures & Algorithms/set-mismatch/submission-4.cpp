class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long x{}; // duplicate - missing
        long long y{}; // duplicate^2 - missing^2
        for (int i{ 1 }; i <= nums.size(); ++i) {
            x += nums[i - 1] - i;
            y += 1LL * nums[i - 1] * nums[i - 1] - 1LL * i * i;
        }
        int missing = (y / x - x) / 2;
        int duplicate = x + missing;
        return { duplicate, missing };
    }
};