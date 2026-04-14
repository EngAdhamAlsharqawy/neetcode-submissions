class Solution {
public:
    int lengthOfLastWord(string s) {
        auto end{ s.find_last_not_of(' ') };
        if (end == string::npos)
            return 0;

        return s.erase(end + 1)
                .substr(s.find_last_of(' ') + 1)
                .length();
    }
};