class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            ++freq[c];
        int max_odd{}, min_even{ INT_MAX };
        for (auto [key, value] : freq)
            if (value % 2)
                max_odd = max(max_odd, value);
            else
                min_even = min(min_even, value);
        return max_odd - min_even;
    }
};