class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};