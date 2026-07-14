class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int neg = -1;
        while (neg + 1 < n && nums[neg + 1] < 0)
            ++neg;
        int pos = neg + 1;

        vector<int> squares;
        squares.reserve(n);
        while (neg >= 0 && pos < n)
            if (-nums[neg] < nums[pos])
                squares.push_back(nums[neg] * nums[neg]), --neg;
            else
                squares.push_back(nums[pos] * nums[pos]), ++pos;

        while (neg >= 0)
            squares.push_back(nums[neg] * nums[neg--]);
        while (pos < n)
            squares.push_back(nums[pos] * nums[pos++]);
        return squares;
    }
};