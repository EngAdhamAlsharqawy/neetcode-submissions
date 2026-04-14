class Solution {
public:
    int lengthOfLastWord(string s) {
        return s.erase(s.find_last_not_of(' ') + 1).substr(s.find_last_of(' ') + 1).length();
    }
};