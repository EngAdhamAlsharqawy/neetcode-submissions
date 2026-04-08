class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int freq[26]{};
        for (int i{}; i < s.size(); ++i)
            ++freq[s[i] - 'a'], --freq[t[i] - 'a'];
        for (int count : freq)
            if (count)
                return false;
        return true;
    }
};