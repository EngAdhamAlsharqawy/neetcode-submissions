class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, pair<int, int>> indices;
        for (int i{}; i < numbers.size(); ++i) {
            auto& idx = indices[numbers[i]];
            if (!idx.first)
                idx.first = i + 1;
            else if (!idx.second)
                idx.second = i + 1;
        }
        for (int n1 : numbers) {
            int n2 = target - n1;
            auto it = indices.find(n2);
            if (it == indices.end())
                continue;
            if (n1 == n2) {
                if (it->second.second)
                    return { it->second.first, it->second.second };
            }
            else
                return { indices[n1].first, it->second.first };
        }  
        return {};
    }
};