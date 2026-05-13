class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset<501> bits;
        for (int n : nums)
            bits.flip(n);
        return bits.none();
    }
};