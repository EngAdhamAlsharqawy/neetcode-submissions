class Solution {
public:
    int countSeniors(vector<string>& details) {
        int counter{};
        for (const string& d : details)
            counter += ((d[11] - '0') * 10 + d[12] - '0') > 60;
        return counter;
    }
};