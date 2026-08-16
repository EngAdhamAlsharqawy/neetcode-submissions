class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        for (size_t i{}, n = nums.size(); i < n; ++i) {
            size_t idx = i;
            for (size_t j = i; j < n; ++j)
                if (i % 2 == nums[idx] < nums[j])
                    idx = j;
            swap(nums[i], nums[idx]);
        }
    }
};