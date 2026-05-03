class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);
        for (char c : text)
            ++freq[c - 'a'];
        int counter{};
        bool is_valid{ true };
        while (is_valid) {
            string balloon{ "balloon" };
            for (char c : balloon) {
                if (!freq[c - 'a']--){
                    is_valid = false;
                    break;
                }
            }
            counter += is_valid;
        }
        return counter;
    }
};