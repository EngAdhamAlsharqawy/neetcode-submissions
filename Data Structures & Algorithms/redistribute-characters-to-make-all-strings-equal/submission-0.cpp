class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> charsFreq;
        for (string& w : words)
            for (char c : w)
                ++charsFreq[c];
        int n = words.size();
        for (auto [c, f] : charsFreq)
            if (f % n)
                return false;
        return true;
    }
};