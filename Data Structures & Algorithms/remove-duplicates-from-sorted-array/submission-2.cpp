class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k{}, i{};
        while (i < n) {
            nums[k] = nums[i];
            while (i < n && nums[k] == nums[i])
                ++i; 
            ++k;
        }
        return k;
    }
};