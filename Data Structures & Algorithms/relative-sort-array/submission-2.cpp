class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> sorted;
        for (int n : arr2) {
            for (int& x : arr1) {
                if (x != n)
                    continue;
                sorted.push_back(n);
                x = -1;
            }
        }
        sort(arr1.begin(), arr1.end());
        for (int n : arr1)
            if (n != -1)
                sorted.push_back(n);
        return sorted;
    }
};