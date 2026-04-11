class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string str : strs) {
            vector<int> char_freq(26, 0);
            for (char c : str)
                ++char_freq[c - 'a'];
            string key;
            for (int i : char_freq)
                key += "#" + to_string(i);
            map[key].push_back(str);
        }
        vector<vector<string>> anagrams;
        for (auto& [key, value] : map)
            anagrams.push_back(value);
        return anagrams;
    }
};