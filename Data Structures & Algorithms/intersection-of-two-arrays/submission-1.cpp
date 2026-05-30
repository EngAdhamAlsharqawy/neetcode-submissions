class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> intersections;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (int i1{}, i2{}; i1 < nums1.size() and i2 < nums2.size();) {
            if (nums1[i1] == nums2[i2]) {
                intersections.insert(nums1[i1]);
                ++i1, ++i2;
            }
            else if (nums1[i1] < nums2[i2])
                ++i1;
            else
                ++i2;
        }
        return vector<int>(intersections.begin(), intersections.end());
    }
};