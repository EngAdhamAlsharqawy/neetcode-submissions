class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int n : nums)
            if(n != val)
                ans.push_back(n);
        nums = ans;
        return nums.size();
    }
};