class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i{}, j{ int(nums.size()) - 1 }; i < j; ++i) {
            while (j && nums[j] == val)
                --j;
            if (nums[i] == val)
                swap(nums[i], nums[j--]);
        }
        if (!nums.empty() && nums[0] == val)
            nums.clear();
        int counter{};
        for (int i{}; i < nums.size() && nums[i] != val; ++i, ++counter);
        return counter;
    }
};