class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int slow{}, fast{}; fast < nums.size(); ++fast)
            if (!(nums[fast] & 1))
                swap(nums[slow++], nums[fast]);
        return nums;
    }
};