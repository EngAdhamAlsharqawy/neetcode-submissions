class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> str_freq;
        for (const string& str : arr)
            ++str_freq[str];
        vector<string> distinct_strings;
        for (const string& str : arr)
            if (str_freq[str] == 1)
                if (!(--k))
                    return str;
        return distinct_strings.size() < k ? "" : distinct_strings[k - 1];
    }
};