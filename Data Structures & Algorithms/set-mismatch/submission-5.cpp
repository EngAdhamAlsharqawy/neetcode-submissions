class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xxor{};
        for (int i{ 1 }; i <= nums.size(); ++i) {
            xxor ^= i;
            xxor ^= nums[i - 1];
        }
        int rightMostBit{ xxor & ~(xxor - 1) };

        int x{}, y{};
        for (int i{ 1 }; i <= nums.size(); ++i) {
            if (i & rightMostBit)
                x ^= i;
            else
                y ^= i;

            if (nums[i - 1] & rightMostBit)
                x ^= nums[i - 1];
            else
                y ^= nums[i - 1];
        }
        
        for (int n : nums)
            if (n == x)
                return { x, y };
        return { y, x };
    }
};