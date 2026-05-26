class Solution {
public:
    int longestPalindrome(string s) {
        int counter{};
        unordered_map<char, int> charsFreq;
        for (char c : s)
            counter += !(++charsFreq[c] % 2) * 2;
        counter += counter < s.size();
        return counter;
    }
};