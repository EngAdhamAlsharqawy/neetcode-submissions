class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> squares(n);
        int l{}, r{ n - 1 };
        for (int i{ n - 1 }; i > -1; --i)
            if (nums[r] < -nums[l])
                squares[i] = nums[l] * nums[l], ++l;
            else
                squares[i] = nums[r] * nums[r], --r;
        return squares;
    }
};