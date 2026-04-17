class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i{}, k = nums.size();
        while (i < k)
            if (nums[i] == val)
                swap(nums[i], nums[--k]);
            else ++i;
        return k;
    }
};