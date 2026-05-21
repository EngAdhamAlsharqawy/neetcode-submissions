class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int chars_freq[26]{};
        for (char c : magazine)
            ++chars_freq[c - 'a'];
        for (char c : ransomNote)
            if(!chars_freq[c - 'a']--)
                return false;
        return true;;
    }
};