class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        set<int> arr2set;
        for (int n : arr2)
            arr2set.insert(n);
        vector<int> missed;
        for (int n : arr1)
            if (!arr2set.contains(n))
                missed.push_back(n);
        sort(missed.begin(), missed.end());
        unordered_map<int, int> count;
        for (int n : arr1)
            ++count[n];
        vector<int> sorted;
        for (int n : arr2)
            while(count[n]--)
                sorted.push_back(n);
        for (int n : missed)
            sorted.push_back(n);
        return sorted;
    }
};