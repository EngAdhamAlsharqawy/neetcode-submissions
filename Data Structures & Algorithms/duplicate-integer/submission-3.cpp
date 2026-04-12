class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_map<int, bool> seen;
        seen.reserve(nums.size());
        for (int n : nums) {
            if (seen[n])
                return true;
            seen[n] = true;
        }
        return false;
    }
};