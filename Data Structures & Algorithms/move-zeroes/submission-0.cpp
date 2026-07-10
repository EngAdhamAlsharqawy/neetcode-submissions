class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i1{}, i2{}; i1 < nums.size(); ++i1, ++i2) {
            if (nums[i1] != 0)
                continue;
            while (i2 < nums.size() && nums[i2] == 0)
                    ++i2;
            if (i2 >= nums.size())
                break;
            nums[i1] = nums[i2];
            nums[i2] = 0;
        }
    }
};