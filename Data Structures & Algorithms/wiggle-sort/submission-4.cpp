class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> wiggle;
        sort(nums.begin(), nums.end());
        for (int l{}, r = int(nums.size()) - 1; l <= r; ++l, --r) {
            wiggle.push_back(nums[l]);
            if (l != r)
                wiggle.push_back(nums[r]);
        }
        nums = wiggle;
    }
};