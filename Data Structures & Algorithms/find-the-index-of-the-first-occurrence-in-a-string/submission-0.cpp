class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i{}; i < haystack.size(); ++i) {
            if (haystack[i] == needle[0]) {
                int j{ 1 };
                for (; j < needle.size(); ++j)
                    if (haystack[i + j] != needle[j])
                        break;
                if (j == needle.size())
                    return i;
            }
        }
        return -1;
    }
};