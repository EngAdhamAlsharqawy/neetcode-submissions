class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int counter{};
        for (string w : words) {
            bool valid{ true };
            for (char c : w) {
                if (allowed.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }
            counter += valid;
        }
        return counter;
    }
};