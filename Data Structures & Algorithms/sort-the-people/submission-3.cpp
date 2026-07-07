class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> pairs;
        for (int i{}; i < heights.size(); ++i)
            pairs.emplace_back(heights[i], names[i]);
        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });
        vector<string> sorted;
        for (auto& [height, name] : pairs)
            sorted.push_back(name);
        return sorted;
    }
};