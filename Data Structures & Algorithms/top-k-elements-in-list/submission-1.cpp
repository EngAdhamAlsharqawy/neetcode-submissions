class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (int n : nums)
            ++frequency[n];

        vector<pair<int, int>> sortedByFrequency;
        for (auto& [n, f] : frequency)
            sortedByFrequency.push_back({ f, n });
        sort(sortedByFrequency.rbegin(), sortedByFrequency.rend());
        vector<int> kFrequent;
        for (int i{}; i < k; ++i)
            kFrequent.push_back(sortedByFrequency[i].second);
        return kFrequent;
    }
};