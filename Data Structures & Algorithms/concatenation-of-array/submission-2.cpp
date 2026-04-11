class Solution {
public:
    vector<int> getConcatenation(const vector<int>& nums) {
        vector<int> ans;
        for (int i{}; i < 2; ++i)
            for (int n : nums)
                ans.push_back(n);
        return ans;
    }
};