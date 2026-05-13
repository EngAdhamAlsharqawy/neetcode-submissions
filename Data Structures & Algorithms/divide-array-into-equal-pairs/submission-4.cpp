class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i{}, j{}; i < nums.size(); i = j) {
            for (j = i + 1; j < nums.size() && nums[j] == nums[i]; ++j);
            if (j - i & 1)
                return false;
        }
        return true;
    }
};