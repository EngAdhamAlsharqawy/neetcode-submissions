class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
        for (int i1{}, i2{}; i1 < m || i2 < n;)
            if (i1 != m && (i2 == n || nums1[i1] <= nums2[i2]))
                nums.push_back(nums1[i1++]);
            else if (i2 != n)
                nums.push_back(nums2[i2++]);
        nums1 = nums;
    }
};