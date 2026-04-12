class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last{ int(nums.size()) - 1 };
        for (int i{}; i < last; ++i) {
            while (last && nums[last] == val)
                --last;
            if (nums[i] == val)
                swap(nums[i], nums[last--]);
        }
        if (!nums.empty() && nums[0] == val) {
            nums.clear();
            return 0;
        }
        return last + 1;
    }
};