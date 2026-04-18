class Solution {
public:
    int countSeniors(vector<string>& details) {
        int counter{};
        for (int i{}; i < details.size(); ++i)
            counter += ((details[i][11] - '0') * 10 + details[i][12] - '0') > 60;
        return counter;
    }
};