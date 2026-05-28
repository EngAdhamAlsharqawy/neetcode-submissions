class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLength{ -1 };
        vector<int> firstIdx(26, -1);
        for (int i{}; i < s.size(); ++i)
            if (firstIdx[s[i] - 'a'] == -1)
                firstIdx[s[i] - 'a'] = i;
            else
                maxLength = max(maxLength, i - firstIdx[s[i] - 'a'] - 1);
        return maxLength;
    }
};