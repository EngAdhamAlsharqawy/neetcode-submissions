class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> errorNums{ 0,1 };
        sort(nums.begin(), nums.end());
        for (int i{ 1 }; i < nums.size(); ++i) {
            if (nums[i - 1] == nums[i])
                errorNums[0] = nums[i];
            else if (nums[i - 1] + 1 != nums[i])
                errorNums[1] = nums[i - 1] + 1;
        }
        if (nums.back() != nums.size())
            errorNums[1] = nums.size();
        return errorNums;
    }
};