class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted_nums{ nums };
        sort(sorted_nums.begin(), sorted_nums.end());
        int x = nums.size();
        bool ok{ false };
        for (int i{}; !ok and i < nums.size(); ++i, --x) {
            if (nums[i] == sorted_nums[0]) {
                ok = true;
                for (int i{}; ok and i < nums.size(); ++i)
                    if (nums[i] != sorted_nums[(i + x) % nums.size()])
                        ok = false;
            }
        }
        return ok;
    }
};