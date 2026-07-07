class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;
        for (int n : arr1)
            ++count[n];
        vector<int> sorted;
        for (int n : arr2)
            while (count[n]--)
                sorted.push_back(n);
        for (auto& [num, freq] : count)
            while (freq-- > 0)
                sorted.push_back(num);
        return sorted;
    }
};