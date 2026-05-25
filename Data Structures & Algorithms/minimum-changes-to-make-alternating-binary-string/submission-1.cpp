class Solution {
public:
    int minOperations(string s) {
        int counter{};
        bool digit{};
        for (char d : s) {
            counter += (d - '0') != digit;
            digit ^= 1;
        }
        return min(counter, int(s.length()) - counter);
    }
};