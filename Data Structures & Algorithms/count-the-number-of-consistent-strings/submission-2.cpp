class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int bit_mask{};
        for (char c : allowed)
            bit_mask |= 1 << (c - 'a');
        int counter{};
        for (string w : words) {
            bool valid{ true };
            for (char c : w) {
                if (!(bit_mask & (1 << (c - 'a')))) {
                    valid = false;
                    break;
                }
            }
            counter += valid;
        }
        return counter;
    }
};