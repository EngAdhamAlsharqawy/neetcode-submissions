class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, vector<int>> freq;
        for (int i{}; i < s.size(); ++i)
            freq[s[i]].push_back(i);
        int firstIdx = s.size();
        for (auto& [c, i] : freq)
            if (i.size() == 1)
                firstIdx = min(firstIdx, i[0]);
        return firstIdx == s.size() ? -1 : firstIdx;
    }
};