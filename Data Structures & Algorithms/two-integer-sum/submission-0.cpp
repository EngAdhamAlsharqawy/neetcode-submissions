class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, queue<int>> nums_idx;
        for (int i{}; i < nums.size(); ++i)
            nums_idx[nums[i]].push(i);

        vector<int> result_idx;
        for (int n1 : nums) {
            int n2{ target - n1 };
            if (nums_idx.contains(n2)) {
                if (n1 == n2 && nums_idx[n1].size() < 2)
                    continue;
                result_idx.push_back(nums_idx[n1].front());
                nums_idx[n1].pop();
                result_idx.push_back(nums_idx[n2].front());
                nums_idx[n2].pop();
                break;
            }
        }
        return result_idx;
    }
};