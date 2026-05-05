class Solution {
public:
    int maxNumberOfBalloons(string& text) {
        unordered_map<char, int> balloon{ {'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1} };
        unordered_map<char, int> text_freq;
        for (char c : text)
            ++text_freq[c];

        int max_balloons = text.length();
        for (auto [key, val] : balloon)
            max_balloons = min(max_balloons, text_freq[key] / val);
        return max_balloons;
    }
};