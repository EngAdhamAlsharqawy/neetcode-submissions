class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;

        vector<int> lps(needle.size(), 0);
        for (int prev_lps{}, i{ 1 }; i < needle.size();)
            if (needle[prev_lps] == needle[i])
                lps[i++] = ++prev_lps;
            else if (!prev_lps)
                lps[i++] = 0;
            else
                prev_lps = lps[prev_lps - 1];

        for (int i{}, j{}; i < haystack.size();) {
            if (haystack[i] == needle[j])
                ++j, ++i;
            else if (j == 0)
                ++i;
            else
                j = lps[j - 1];
            if (j == needle.size())
                return i - j;
        }
        return -1;
    }
};