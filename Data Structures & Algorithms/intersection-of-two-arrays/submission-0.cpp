class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> intersections;
        for (int n1 : nums1) {
            for (int n2 : nums2) {
                if (n1 == n2) {
                    intersections.insert(n1);
                    break;
                }
            }
        }
        return vector<int>(intersections.begin(), intersections.end());
    }
};