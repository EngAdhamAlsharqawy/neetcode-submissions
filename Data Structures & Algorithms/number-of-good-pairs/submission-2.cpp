class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter{};
        unordered_map<int, int> nums_map;
        for (int n : nums)
            counter += nums_map[n]++;
        return counter;
    }
};