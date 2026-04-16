class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> anagrams_map;
        for (string s : strs) {
            map<char, int> freq;
            for (char c : s)
                ++freq[c];
            anagrams_map[freq].push_back(s);
        }
        vector<vector<string>> groups;
        for (auto& [key, value] : anagrams_map)
            groups.push_back(value);
        return groups;
    }
};