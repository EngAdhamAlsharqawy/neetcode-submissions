class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (char c : s)
            ++freq[c - 'a'];
        int max_odd{ 1 }, min_even = s.length();
        for (int val : freq) {
            if (!val)
                continue;
            val % 2 ? max_odd = max(max_odd, val)
                    : min_even = min(min_even, val);
        }
        return max_odd - min_even;
    }
};