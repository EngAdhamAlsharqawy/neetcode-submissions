class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int maxNum{ *max_element(nums.begin(), nums.end()) };
        vector<bool> needsPair(maxNum + 1, false);
        for (int n : nums)
			needsPair[n] = !needsPair[n];
        for (int n : nums)
            if (needsPair[n])
                return false;
        return true;
    }
};