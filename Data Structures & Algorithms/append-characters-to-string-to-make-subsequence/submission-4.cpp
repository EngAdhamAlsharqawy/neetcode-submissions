class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_idx{}, t_idx{};
        int s_length = s.length(), t_length = t.length();
        while (s_idx < s_length && t_idx < t_length)
            if (s[s_idx++] == t[t_idx])
                t_idx++;
        return t_length - t_idx;
    }
};