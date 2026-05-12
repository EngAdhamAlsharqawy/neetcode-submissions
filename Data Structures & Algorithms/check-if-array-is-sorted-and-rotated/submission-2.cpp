class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        for (int i{}, counter{}; i < n; ++i) {
            if (nums[i % n] > nums[(i + 1) % n] and ++counter > 1)
                return false;
        }
        return true;
    }
};