class Solution {
public:
    string largestGoodInteger(string num) {
        string maxGood;
        for (int i{}; i < num.size() - 2; ++i) {
            if ((maxGood.empty() or maxGood[0] < num[i]) 
                and num[i] == num[i + 1] and num[i] == num[i + 2])
                maxGood = string(3, num[i]);
        }
        return maxGood;
    }
};