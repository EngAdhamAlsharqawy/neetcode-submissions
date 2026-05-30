class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersections;
        unordered_map<int, bool> nums1Seen;
        for (int n1 : nums1)
            nums1Seen[n1] = true;
        for (int n2 : nums2)
            if (nums1Seen[n2])
                intersections.push_back(n2), nums1Seen[n2] = false;
        return intersections;
    }
};