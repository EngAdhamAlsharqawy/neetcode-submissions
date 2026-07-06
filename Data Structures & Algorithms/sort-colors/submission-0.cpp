class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[]{ 0, 0, 0 };
        for (int n : nums)
            ++colors[n];
        int idx{};
        for (int i{}; i < 3; ++i)
            while (colors[i]--)
                nums[idx++] = i;
    }
};