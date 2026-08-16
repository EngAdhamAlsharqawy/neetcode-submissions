class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> output;
        sort(nums.begin(), nums.end());
        for (size_t i{}, l{}, n = nums.size(), r = n - 1; i < n; ++i)
            output.push_back(nums[i % 2 ? r-- : l++]);
        nums = output;
    }
};
