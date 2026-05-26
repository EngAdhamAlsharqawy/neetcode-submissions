class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charsFreq;
        for (char c : s)
            ++charsFreq[c];
        int counter{};
        bool hasOddFreq{};
        for (auto [c, f] : charsFreq) {
            counter += (f / 2) * 2;
            if (f % 2)
                hasOddFreq = true;
        }
        return counter + hasOddFreq;
    }
};