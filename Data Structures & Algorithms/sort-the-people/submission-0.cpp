class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> order(names.size());
        iota(order.begin(), order.end(), 0);
        sort(order.begin(), order.end(), [&](int a, int b) {
            return heights[a] > heights[b];
        });
        vector<string> sorted;
        for (int i : order)
            sorted.push_back(names[i]);
        return sorted;
    }
};