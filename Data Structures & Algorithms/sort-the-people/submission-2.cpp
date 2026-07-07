class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> height_to_name;
        for (int i{}; i < heights.size(); ++i)
            height_to_name[heights[i]] = names[i];
        vector<string> sorted(heights.size());
        int idx = heights.size() - 1;
        for (auto [height, name] : height_to_name)
            sorted[idx--] = name;
        return sorted;
    }
};