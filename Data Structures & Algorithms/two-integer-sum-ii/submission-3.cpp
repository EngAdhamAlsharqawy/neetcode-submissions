class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> indices;
        for (int i{}; i < numbers.size(); ++i) {
            auto it = indices.find(target - numbers[i]);
            if (it != indices.end())
                return { it->second + 1, i + 1 };
            indices[numbers[i]] = i;
        }
        return {};
    }
};