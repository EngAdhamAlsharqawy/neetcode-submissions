class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1{}, max2{}, min1{}, min2{};
        min1 = min2 = *max_element(nums.begin(), nums.end());
        for (int n : nums) {
            if (max1 < n)
                max2 = max1, max1 = n;
            else if (max2 < n)
                max2 = n;
            if (n < min1)
                min2 = min1, min1 = n;
            else if (n < min2)
                min2 = n;
        }
        return max1 * max2 - min1 * min2;
    }
};