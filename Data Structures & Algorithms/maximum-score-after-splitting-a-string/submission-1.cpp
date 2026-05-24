class Solution {
public:
    int maxScore(string s) {
        vector<int> left0s(s.size(), 0), right1s(s.size(), 0);
        left0s[0] = s[0] == '0';
        for (int i{ 1 }; i < s.size(); ++i)
            left0s[i] += left0s[i - 1] + (s[i] == '0');
        right1s.back() = s.back() == '1';
        for (int i = s.size() - 2; i >= 0; --i)
            right1s[i] += right1s[i + 1] + (s[i] == '1');
        int score{};
        for (int i{ 1 }; i < s.size(); ++i)
            score = max(score, left0s[i - 1] + right1s[i]);
        return score;
    }
};