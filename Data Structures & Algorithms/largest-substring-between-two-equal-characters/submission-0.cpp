class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLength{ -1 };
        unordered_map<char, int> firstIdx;
        for (int i{}; i < s.size(); ++i)
            if (!firstIdx.contains(s[i]))
                firstIdx[s[i]] = i;
            else
                maxLength = max(maxLength, i - firstIdx[s[i]] - 1);
        return maxLength;
    }
};