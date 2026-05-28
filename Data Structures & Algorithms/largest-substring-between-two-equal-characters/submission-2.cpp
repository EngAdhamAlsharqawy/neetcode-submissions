class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLength{ -1 };
        unordered_map<char, int> firstIdx;
        unordered_map<char, int> lastIdx;
        for (int i{}; i < s.size(); ++i)
            if (!firstIdx.contains(s[i]))
                firstIdx[s[i]] = i;
            else
                lastIdx[s[i]] = i;
        for (auto& [c, idx] : firstIdx)
            maxLength = max(maxLength, lastIdx[c] - idx - 1);
        return maxLength;
    }
};