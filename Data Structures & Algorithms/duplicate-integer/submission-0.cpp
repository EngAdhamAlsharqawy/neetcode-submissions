class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_set<int> set;
        for (int i{}; i < nums.size(); ++i)
            if (!set.insert(nums[i]).second)
                return true;
        return false;
    }
};