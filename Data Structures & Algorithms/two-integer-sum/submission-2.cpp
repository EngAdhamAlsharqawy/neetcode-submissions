class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        if (nums.size() < 2)
            return solution;
        unordered_map<int, vector<int>> nums_idx;
        for (int i{}; i < nums.size(); ++i)
            nums_idx[nums[i]].push_back(i);

        for (int i{}; i < nums.size(); ++i) {
            int rem{target - nums[i]};
            if (nums_idx.contains(rem) && nums_idx[rem][0] != i) {
                solution.push_back(i);
                solution.push_back(nums_idx[rem][0]);
                sort(solution.begin(), solution.end());
                return solution;
            }
        }
        return solution;
    }
};