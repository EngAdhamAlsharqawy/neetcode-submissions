class Solution {
public:
    string largestGoodInteger(string num) {
        string maxGood;
        for (int i{}; i < num.size() - 2; ++i)
            if (num[i] == num[i + 1] and num[i] == num[i + 2])
                maxGood = max(maxGood, num.substr(i, 3));
        return maxGood;
    }
};