class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for (int n1 : nums1) {
            int next_greater{ -1 };
            for (int j = nums2.size() - 1; j > -1; --j) {
                if (n1 == nums2[j])
                    break;
                else if (n1 < nums2[j])
                    next_greater = nums2[j];
            }
            nums.push_back(next_greater);
        }
        return nums;
    }
};