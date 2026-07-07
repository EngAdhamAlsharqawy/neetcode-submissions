class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> idx;
        for (int i{}; i < arr2.size(); ++i)
            idx[arr2[i]] = i;
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            int a_idx = idx.count(a) ? idx[a] : idx.size() + a;
            int b_idx = idx.count(b) ? idx[b] : idx.size() + b;
            return a_idx < b_idx;
        });
        return arr1;
    }
};