class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (size_t i = 1, n = nums.size(); i + 1 < n; i += 2)
            swap(nums[i], nums[i + 1]);
    }
};
