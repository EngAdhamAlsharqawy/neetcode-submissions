class Solution {
public:
    string largestGoodInteger(string num) {
        char maxGood{ '\0' };
        for (int i{}; i < num.size() - 2; ++i)
            if (num[i] == num[i + 1] and num[i] == num[i + 2])
                maxGood = max(maxGood, num[i]);
        return maxGood == '\0' ? "" : string(3, maxGood);
    }
};