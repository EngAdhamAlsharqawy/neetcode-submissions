class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersections;
        unordered_set<int> nums1Set(nums1.begin(), nums1.end());
        unordered_set<int> nums2Set(nums2.begin(), nums2.end());
        for (int n1 : nums1Set)
            if (nums2Set.contains(n1))
                intersections.push_back(n1);
        return intersections;
    }
};