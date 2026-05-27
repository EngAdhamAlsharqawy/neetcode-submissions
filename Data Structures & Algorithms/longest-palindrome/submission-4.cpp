class Solution {
public:
    int longestPalindrome(string s) {
        int counter{};
        size_t bitMask{};
        for (char c : s) {
            size_t bit = islower(c) ? 1 << (c - 'a') : 1LL << (c - 'A' + 26);
            if (bitMask & bit)
                counter += 2;
            bitMask ^= bit;
        }
        counter += bitMask != 0;
        return counter;
    }
};