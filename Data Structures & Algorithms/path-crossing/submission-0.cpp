class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int, int> point{0, 0};
        unordered_map<char, pair<int, int>> directions{
            {'N', {1, 0}}, {'S', {-1, 0}}, {'E', {0, 1}}, {'W', {0, -1}}};
        unordered_set<string> visited{ "0,0" };
        for (char d : path) {
            point.first += directions[d].first;
            point.second += directions[d].second;
            if (!visited.insert(to_string(point.first) + "," +
                                to_string(point.second)).second)
                return true;
        }
        return false;
    }
};