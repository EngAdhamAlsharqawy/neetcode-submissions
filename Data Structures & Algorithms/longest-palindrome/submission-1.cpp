class Solution {
public:
    int longestPalindrome(string s) {
        int counter{};
        unordered_map<char, int> charsFreq;
        for (char c : s)
            counter += !(++charsFreq[c] % 2) * 2;
        for (auto& [ch, fr] : charsFreq) {
            if (fr % 2) {
                ++counter;
                break;
            }
        }
        return counter;
    }
};