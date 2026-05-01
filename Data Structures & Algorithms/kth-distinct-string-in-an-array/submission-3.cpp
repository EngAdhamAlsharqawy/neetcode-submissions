class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> str_freq;
        for (const string& str : arr)
            ++str_freq[str];
        for (const string& str : arr)
            if (!(k -= str_freq[str] == 1))
                    return str;
        return "";
    }
};