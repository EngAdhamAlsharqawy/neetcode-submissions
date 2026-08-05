class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequent;
        for (int n : nums)
            ++frequent[n];

        vector<int> kFrequent;
        while (k--) {
            int kNum = 0;
            int mostFreq = -1;
            for (auto &[num, freq] : frequent) {
                if (mostFreq < freq) {
                    kNum = num;
                    mostFreq = freq;
                }
            }
            frequent.erase(kNum);
            kFrequent.push_back(kNum);
        }
        return kFrequent;
    }
};