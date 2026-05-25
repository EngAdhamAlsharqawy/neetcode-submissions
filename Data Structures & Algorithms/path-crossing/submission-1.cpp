class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int, int> point{0, 0};
        unordered_map<char, pair<int, int>> directions{
            {'N', {1, 0}}, {'S', {-1, 0}}, {'E', {0, 1}}, {'W', {0, -1}}};
        unordered_set<pair<int, int>, pair_hash> visited{{0, 0}};
        for (char d : path) {
            point.first += directions[d].first;
            point.second += directions[d].second;
            if (!visited.insert(point).second)
                return true;
        }
        return false;
    }

private:
    struct pair_hash {
        size_t operator()(const pair<int, int>& p) const {
            return ((size_t(p.first) << 32) | size_t(p.second));
        }
    };
};