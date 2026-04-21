class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> substrings;
        for (int i{}; i < words.size(); ++i) {
            for (int j{}; j < words.size(); ++j) {
                if (i == j)
                    continue;
                if (words[j].find(words[i]) != string::npos) {
                    substrings.push_back(words[i]);
                    break;
                }
            }
        }
        return substrings;
    }
};