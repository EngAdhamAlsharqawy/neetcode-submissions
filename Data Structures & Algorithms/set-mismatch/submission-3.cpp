class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate{}, missing{};
        vector<int> freq(nums.size() + 1, 0);
        for (int n : nums)
            if (freq[n - 1] == -1)
                duplicate = n;
            else
                freq[n - 1] = -1;
        for (int i{}; i < nums.size(); ++i) {
            if (freq[i] != -1) {
                missing = i + 1;
                break;
            }
        }
        return { duplicate, missing };
    }
};