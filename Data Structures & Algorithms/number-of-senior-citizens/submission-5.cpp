class Solution {
public:
    int countSeniors(vector<string>& details) {
        int counter{};
        for (const string& d : details)
            counter += stoi(d.substr(11, 2)) > 60;
        return counter;
    }
};