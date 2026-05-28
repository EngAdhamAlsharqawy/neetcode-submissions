class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate{}, missing{};
        vector<int> freq(nums.size() + 1, 0);
        for (int n : nums)
            ++freq[n];
        for (int i{ 1 }; (!duplicate or !missing) and i <= nums.size(); ++i)
            if (freq[i] == 2)
                duplicate = i;
            else if (!freq[i])
                missing = i;
        return { duplicate, missing };
    }
};