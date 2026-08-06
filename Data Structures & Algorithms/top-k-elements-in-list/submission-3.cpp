class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (int n : nums)
            ++frequency[n];

        vector<vector<int>> frequencyBuckets(nums.size());
        for (auto& [n, f] : frequency)
            frequencyBuckets[f - 1].push_back(n);
        vector<int> topK;
        for (int i = nums.size() - 1; i >= 0; --i) {
            for (int n : frequencyBuckets[i]) {
                topK.push_back(n);
                if (topK.size() == k)
                    return topK;
            }
        }
        return topK;
    }
};