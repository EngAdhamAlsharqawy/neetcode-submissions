class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter{};
        for (int i{}; i < nums.size(); ++i)
            for (int j{ i + 1 }; j < nums.size(); ++j)
                counter += nums[i] == nums[j];
        return counter;
    }
};