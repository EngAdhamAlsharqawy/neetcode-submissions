class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> nums_set(nums.begin(), nums.end());
        int k{};
        for (int num : nums_set)    
            nums[k++] = num;
        return k;
    }
};