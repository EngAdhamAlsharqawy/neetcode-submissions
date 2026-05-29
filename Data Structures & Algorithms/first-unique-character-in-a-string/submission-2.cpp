class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            ++freq[c];
        for (int i{}; i < s.size(); ++i)
            if (freq[s[i]] == 1)
                return i;
        return -1;
    }
};