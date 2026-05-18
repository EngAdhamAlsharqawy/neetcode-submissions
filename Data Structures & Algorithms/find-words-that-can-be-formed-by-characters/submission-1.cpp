class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_freq;
        for (char c : chars)
            ++chars_freq[c];
        int counter{};
        for (string& w : words) {
            unordered_map<char, int> word_freq;
            bool is_good{ true };
            for (char c : w) {
                if (chars_freq[c] < ++word_freq[c]) {
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