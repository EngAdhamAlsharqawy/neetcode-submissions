class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> chars_freq(26, 0);
        for (char c : chars)
            ++chars_freq[c - 'a'];
        int counter{};
        for (string& w : words) {
            vector<int> temp_freq{ chars_freq };
            bool is_good{ true };
            for (char c : w) {
                if (!temp_freq[c - 'a']--) {
                    is_good = false;
                    break;
                }
            }
            if (is_good)
                counter += w.length();
        }
        return counter;
    }
};