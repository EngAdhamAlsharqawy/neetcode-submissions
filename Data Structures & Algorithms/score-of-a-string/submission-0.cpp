class Solution {
public:
    int scoreOfString(string s) {
        int result{};
        for (int i{}; i < s.size() - 1; ++i)
            result += abs(s[i] - s[i + 1]);
        return result;
    }
};