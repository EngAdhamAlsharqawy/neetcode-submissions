class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_map, t_map;
        for (int i{}; i < s.size(); ++i)
            if (s_map.count(s[i]) && s_map[s[i]] != t[i])
                return false;
            else if (t_map.count(t[i]) && t_map[t[i]] != s[i])
                return false;
            else
                s_map[s[i]] = t[i], t_map[t[i]] = s[i];
        return true;
    }
};