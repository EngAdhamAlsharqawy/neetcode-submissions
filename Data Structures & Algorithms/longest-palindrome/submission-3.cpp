class Solution {
public:
    int longestPalindrome(string s) {
        int counter{};
        unordered_set<char> single;
        for (char c : s)
            if (!single.insert(c).second)
                single.erase(c), counter += 2; 
        counter += !single.empty();
        return counter;
    }
};