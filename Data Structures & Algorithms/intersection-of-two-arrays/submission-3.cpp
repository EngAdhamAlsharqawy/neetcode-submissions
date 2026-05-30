class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersections;
        unordered_set<int> nums1Set(nums1.begin(), nums1.end());
        for (int n2 : nums2)
            if (nums1Set.contains(n2))
                intersections.push_back(n2), nums1Set.erase(n2);
        return intersections;
    }
};