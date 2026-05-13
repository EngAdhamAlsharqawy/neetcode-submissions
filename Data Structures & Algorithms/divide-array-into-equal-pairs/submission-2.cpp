class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int n : nums)
            ++freq[n];
        for (auto [n, f] : freq)
            if (f % 2)
                return false;
        return true;
    }
};