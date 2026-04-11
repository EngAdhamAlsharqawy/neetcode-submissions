class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string str : strs) {
            string temp{ str };
            sort(temp.begin(), temp.end());
            map[temp].push_back(str);
        }
        vector<vector<string>> anagrams;
        for (pair<const string, vector<string>>& i : map)
            anagrams.push_back(i.second);
        return anagrams;
    }
};