class Solution {
public:
    int minOperations(string s) {
        int counter{};
        bool digit{};
        for (int i{}; i < s.size(); ++i)
            counter += (s[i] - '0') != (i % 2);
        return min(counter, int(s.length()) - counter);
    }
};