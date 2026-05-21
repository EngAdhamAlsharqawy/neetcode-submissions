class Solution {
public:
    string largestGoodInteger(string num) {
        string maxGood;
        int maxVal{};
        for (int i{}; i < num.size() - 2; ++i)
            if (num[i] == num[i + 1] and num[i] == num[i + 2])
                if (maxVal <= stoi(num.substr(i, 3)))
                    maxVal = stoi(num.substr(i, 3)),
                    maxGood = num.substr(i, 3);
        return maxGood;
    }
};