class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size(), -1);
        unordered_map<int, int> nums1Idx;
        for (int i{}; i < nums1.size(); ++i)
            nums1Idx[nums1[i]] = i;

        stack<int> nums_stack;
        for (int n : nums2) {
            while (!nums_stack.empty() and nums_stack.top() < n)
                nums[nums1Idx[nums_stack.top()]] = n, nums_stack.pop();
            if (nums1Idx.count(n))
                nums_stack.push(n);
        }
        return nums;
    }
};