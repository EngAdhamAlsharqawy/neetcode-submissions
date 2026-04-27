class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for (int n1 : nums1) {
            int next_greater{ -1 };
            bool is_next{};
            for (int n2 : nums2) {
                if (n1 == n2)
                    is_next = true;
                else if (is_next && n1 < n2) {
                    next_greater = n2;
                    break;
                }
            }
            nums.push_back(next_greater);
        }
        return nums;
    }
};