class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int flag{};
        int n = words.size();
        vector<int> freq(26, 0);
        for (string& w : words) {
            for (char c : w) {
                int i{ c - 'a' };
                if (freq[i])
                    flag += !(++freq[i] % n);
                else
                    flag -= ++freq[i] % n;
                freq[i] %= n;
            }
        }
        return !flag;
    }
};