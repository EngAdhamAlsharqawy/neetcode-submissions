class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> sorted;
        for (int n : nums)
            if (!(n % 2))
                sorted.push_back(n);
        for (int n : nums)
            if (n % 2)
                sorted.push_back(n);
        return sorted;
    }
};