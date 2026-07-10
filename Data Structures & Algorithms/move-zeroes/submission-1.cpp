class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i1{};
        for (int i2{}; i2 < nums.size(); ++i2)
            if (nums[i2])
                nums[i1++] = nums[i2];
        while (i1 < nums.size())
            nums[i1++] = 0;
    }
};