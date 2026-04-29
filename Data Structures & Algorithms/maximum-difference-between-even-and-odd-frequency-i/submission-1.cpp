class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            ++freq[c];
        int max_difference{ INT_MIN };
        for (auto [key, odd] : freq) {
            if (!(odd % 2)) continue;
            for (auto [key, even] : freq) {
                if (even % 2) continue;
                max_difference = max(max_difference, odd - even);
            }
        }
        return max_difference;
    }
};