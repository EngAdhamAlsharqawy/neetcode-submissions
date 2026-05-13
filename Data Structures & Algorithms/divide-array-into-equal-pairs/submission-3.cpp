class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int freq[501]{};
        for (int n : nums)
            ++freq[n];
        for (int f : freq)
            if (f % 2)
                return false;
        return true;
    }
};