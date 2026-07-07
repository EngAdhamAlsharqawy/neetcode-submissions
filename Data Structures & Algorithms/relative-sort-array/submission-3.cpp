class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> sorted;
        int max_val{ arr1[0] };
        for (int n : arr1)
            if (max_val < n)
                max_val = n;
        vector<int> count(max_val + 1, 0);
        for (int n : arr1)
            ++count[n];
        for (int n : arr2)
            while (count[n]--)
                sorted.push_back(n);
        for (int i{}; i <= max_val; ++i)
            while (count[i]-- > 0)
                sorted.push_back(i);
        return sorted;
    }
};