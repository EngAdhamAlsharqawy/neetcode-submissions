class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i{};
        while (i < min(word1.size(), word2.size())) {
            merged += word1[i];
            merged += word2[i];
            ++i;
        }
        merged += word1.substr(i) + word2.substr(i);
        return merged;
    }
};