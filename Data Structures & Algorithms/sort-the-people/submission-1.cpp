class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> height_to_name;
        for (int i{}; i < heights.size(); ++i)
            height_to_name[heights[i]] = names[i];
        sort(heights.begin(), heights.end(), greater<>());
        vector<string> sorted;
        for (int h : heights)
            sorted.push_back(height_to_name[h]);
        return sorted;
    }
};