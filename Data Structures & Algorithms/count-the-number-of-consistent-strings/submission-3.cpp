class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool is_allowed[26]{};
        for (char c : allowed)
            is_allowed[c - 'a'] = true;
        int counter{};
        for (string w : words) {
            bool valid{ true };
            for (char c : w) {
                if (!is_allowed[c - 'a']) {
                    valid = false;
                    break;
                }
            }
            counter += valid;
        }
        return counter;
    }
};