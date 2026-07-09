class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int idx{ m + n - 1 }, i1{ m - 1 }, i2{ n - 1 }; i2 >= 0; --idx)
            if (i1 >= 0 && nums1[i1] >= nums2[i2])
                nums1[idx] = nums1[i1--];
            else
                nums1[idx] = nums2[i2--];
    }
};