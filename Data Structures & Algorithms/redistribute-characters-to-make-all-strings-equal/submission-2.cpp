class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int bad{};
        int n = words.size();
        vector<int> freq(26, 0);
        for (string& w : words) {
            for (char c : w) {
                int i = c - 'a';
                bad += !freq[i];
                freq[i] = (freq[i] + 1) % n;
                bad -= !freq[i];
            }
        }
        return !bad;
    }
};