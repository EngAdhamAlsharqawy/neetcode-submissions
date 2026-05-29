class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> isUniq;
        for (char c : s)
            if (!isUniq.contains(c))
                isUniq[c] = true;
            else
                isUniq[c] = false;
        for (int i{}; i < s.size(); ++i)
            if (isUniq[s[i]])
                return i;
        return -1;
    }
};