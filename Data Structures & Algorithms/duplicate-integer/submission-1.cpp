class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size());
        for (int i{}; i < nums.size(); ++i)
            if (!seen.insert(nums[i]).second)
                return true;
        return false;
    }
};