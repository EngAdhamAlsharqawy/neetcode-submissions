class Solution {
public:
    string largestGoodInteger(string num) {
        int maxGood{ -1 };
        for (int i{}; i < num.size() - 2; ++i)
            if (num[i] == num[i + 1] and num[i] == num[i + 2])
                maxGood = max(maxGood, num[i] - '0');
        return maxGood == -1 ? "" : string(3, maxGood + '0');
    }
};