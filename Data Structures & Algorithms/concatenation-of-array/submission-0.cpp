class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size{ int(nums.size()) };
        for (int i{}; i < size; ++i)
            nums.push_back(nums[i]);
        return nums;
    }
};