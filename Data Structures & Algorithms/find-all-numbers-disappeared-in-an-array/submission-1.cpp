class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> seen(nums.size() + 1, false);
        for (int n : nums)
            seen[n] = true;
        vector<int> disappeared_nums;
        for (int i{ 1 }; i <= nums.size(); ++i)
            if (!seen[i])
                disappeared_nums.push_back(i);
        return disappeared_nums;
    }
};