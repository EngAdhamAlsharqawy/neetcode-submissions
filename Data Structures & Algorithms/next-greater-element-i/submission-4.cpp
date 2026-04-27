class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size(), -1);
        unordered_map<int, int> nums1Idx;
        for (int i{}; i < nums1.size(); ++i)
            nums1Idx[nums1[i]] = i;
        for (int i{}; i < nums2.size(); ++i) {
            if (nums1Idx.find(nums2[i]) == nums1Idx.end())
                continue;
            for (int j{ i + 1 }; j < nums2.size(); ++j) {
                if (nums2[i] < nums2[j]) {
                    nums[nums1Idx[nums2[i]]] = nums2[j];
                    break;
                }
            }
        }
        return nums;
    }
};