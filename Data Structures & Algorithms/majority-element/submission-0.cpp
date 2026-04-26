class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (const int& n : nums)
            ++freq[n];
        for (const auto& [key, val] : freq)
            if (val > nums.size() / 2)
                return key;
    }
};