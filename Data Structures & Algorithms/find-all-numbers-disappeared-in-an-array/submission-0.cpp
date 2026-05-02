class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        for (int n : nums)
            seen.insert(n);
        vector<int> disappeared_nums;
        for (int i{ 1 }; i < nums.size() + 1; ++i)
            if (!seen.count(i))
                disappeared_nums.push_back(i);
        return disappeared_nums;
    }
};