class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersections;
        set<int> set1(nums1.begin(), nums1.end()),
                 set2(nums2.begin(), nums2.end());
        set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                         back_inserter(intersections));
        return intersections;
    }
};