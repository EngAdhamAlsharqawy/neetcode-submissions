class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (int n : nums)
            ++frequency[n];

        priority_queue<pair<int, int>> frequency_heap;
        for (auto& [n, f] : frequency) {
            frequency_heap.push({ -f, n });
            if (frequency_heap.size() > k)
                frequency_heap.pop();
        }
        vector<int> kFrequent;
        while (!frequency_heap.empty()) {
            kFrequent.push_back(frequency_heap.top().second);
            frequency_heap.pop();
        }
        return kFrequent;
    }
};