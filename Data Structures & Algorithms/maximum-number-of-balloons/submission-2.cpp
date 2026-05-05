class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(26, 0);
        for (char c : text)
            ++count[c - 'a'];
        return min({count['b' - 'a'] / 1, count['a' - 'a'] / 1,
                    count['l' - 'a'] / 2, count['o' - 'a'] / 2,
                    count['n' - 'a'] / 1});
    }
};