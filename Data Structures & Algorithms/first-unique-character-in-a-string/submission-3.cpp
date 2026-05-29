class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char, int> uniqIdx;
        for (int i{}; i < n; ++i)
            if (!uniqIdx.contains(s[i]))
                uniqIdx[s[i]] = i;
            else
                uniqIdx[s[i]] = n;
        int firstIdx{ n };
        for (auto& [ch, idx] : uniqIdx)
            firstIdx = min(firstIdx, idx);
        return firstIdx == n ? -1 : firstIdx;
    }
};