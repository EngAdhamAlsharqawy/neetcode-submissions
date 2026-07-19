class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int l{}, r = nums.size() - 1; l < r;)
            if (nums[l] & 1)
                swap(nums[l], nums[r--]);
            else
                ++l;
        return nums;
    }
};