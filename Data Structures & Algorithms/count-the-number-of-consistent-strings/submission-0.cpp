class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowed_set;
        for (char c : allowed)
            allowed_set.insert(c);
        int counter{};
        for (string w : words) {
            bool valid{ true };
            for (char c : w) {
                if (!allowed_set.count(c)) {
                    valid = false;
                    break;
                }
            }
            counter += valid;
        }
        return counter;
    }
};