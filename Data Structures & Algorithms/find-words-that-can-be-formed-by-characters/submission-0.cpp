class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_freq;
        for (char c : chars)
            ++chars_freq[c];
        int counter{};
        for (string& w : words) {
            unordered_map<char, int> word_freq;
            for (char c : w)
                ++word_freq[c];
            bool is_good{ true };
            for (auto [c, f] : word_freq) {
                if (chars_freq[c] < f) {
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