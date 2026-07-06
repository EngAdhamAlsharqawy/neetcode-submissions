class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int l{}, i{}, r = nums.size() - 1; i <= r; ++i) {
            if (nums[i] == 0)
                swap(nums[l++], nums[i]);
            else if (nums[i] == 2)
                swap(nums[i--], nums[r--]);
        }
    }
};