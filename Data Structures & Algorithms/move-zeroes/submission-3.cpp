class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i1{}, i2{}; i2 < nums.size(); ++i2) {
            if (nums[i2]) {
                if (i1 != i2)
                    swap(nums[i1], nums[i2]);
                ++i1;
            }
        }
    }
};