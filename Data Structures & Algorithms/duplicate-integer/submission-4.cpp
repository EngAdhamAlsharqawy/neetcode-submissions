class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_map<int, int> freq;
        freq.reserve(nums.size());
        for (int n : nums)
            if (++freq[n] > 1)
                return true;
        return false;
    }
};