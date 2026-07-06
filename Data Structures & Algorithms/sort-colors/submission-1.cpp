class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros{}, ones{}, twos{};
        for (int n : nums)
            zeros += n == 0, ones += n == 1, twos += n == 2;
        for (int i{}; i < nums.size(); ++i)
            if (i < zeros)
                nums[i] = 0;
            else if (i < zeros + ones)
                nums[i] = 1;
            else
                nums[i] = 2;
    }
};