class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charsFreq;
        int oddFreqCounter{};
        for (char c : s)
            ++charsFreq[c] % 2 ? ++oddFreqCounter : --oddFreqCounter;
        return oddFreqCounter ? s.size() - oddFreqCounter + 1 : s.size();
    }
};