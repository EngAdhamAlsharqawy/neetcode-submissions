class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        for (int i{}, counter{}; i < 2 * n; ++i) {
            if (nums[i % n] <= nums[(i + 1) % n])
                ++counter;
            else
                counter = 1;
            if (counter == n)
                return true;
        }
        return false;
    }
};