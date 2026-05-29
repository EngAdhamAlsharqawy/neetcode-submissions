class Solution {
public:
    int firstUniqChar(string s) {
        for (int i{}; i < s.size(); ++i) {
            bool uniq{ true };
            for (int j{}; uniq and j < s.size(); ++j)
                if (i != j and s[i] == s[j])
                    uniq = false;
            if (uniq)
                return i;
        }
        return -1;
    }
};