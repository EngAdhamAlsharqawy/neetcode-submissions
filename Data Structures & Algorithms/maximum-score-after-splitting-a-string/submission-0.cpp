class Solution {
public:
    int maxScore(string s) {
        int zeroesCounter{}, onesCounter{};
        for (char c : s)
            onesCounter += c == '1';
        int score{};
        for (int i{}; i < s.size() - 1; ++i) {
            zeroesCounter += s[i] == '0';
            onesCounter -= s[i] == '1';
            score = max(score, zeroesCounter + onesCounter);
        }
        return score;
    }
};