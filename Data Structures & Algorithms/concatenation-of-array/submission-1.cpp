class Solution {
public:
    vector<int> getConcatenation(const vector<int>& nums) {
        vector<int> ans(nums.size() * 2);
        for (int i{}; i < nums.size(); ++i)
            ans[i] = ans[i + nums.size()] = nums[i];
        return ans;
    }
};