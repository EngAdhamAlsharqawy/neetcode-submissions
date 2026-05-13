class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter{};
        unordered_map<int, int> nums_map;
        for (int n : nums)
            ++nums_map[n];
        for (auto [key, val] : nums_map)
            counter += val * (val - 1) / 2;
        return counter;
    }
};