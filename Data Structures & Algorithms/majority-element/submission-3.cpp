class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> bits_freq(32, 0);
        for (int n : nums)
            for (int i{}; i < 32; ++i)
                bits_freq[i] += (n >> i) & 1;
        int majority{};
        for (int i{}; i < 32; ++i)
            if (bits_freq[i] > nums.size() / 2)
                majority |= 1 << i;
        return majority;
    }
};