class Solution {
public:
    int maxScore(string s) {
        // score = Max of all (leftZeros + rightOnes)
        // score = Max of all (leftZeros + (totalOnes - leftOnes))
        // score = totalOnes (constant) + Max of all (leftZeros - leftOnes)
        int ones{}, zeros{}, score{ INT_MIN };
        s[0] == '0' ? ++zeros : ++ones;
        for (int i{ 1 }; i < s.size(); ++i) {
            score = max(score, zeros - ones);
            s[i] == '0' ? ++zeros : ++ones;
        }
        score += ones;
        return score;
    }
};