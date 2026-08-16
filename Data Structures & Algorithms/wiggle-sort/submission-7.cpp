class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        for (size_t i{}, n = nums.size(); i + 1 < n; ++i) {
            if (i % 2 == nums[i] < nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }
    }
};