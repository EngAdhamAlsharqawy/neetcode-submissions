class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        for (int i{ n - 1 }, right_max{ -1 }; i >= 0; --i)
            ans[i] = right_max, right_max = max(right_max, arr[i]);
        return ans;
    }
};