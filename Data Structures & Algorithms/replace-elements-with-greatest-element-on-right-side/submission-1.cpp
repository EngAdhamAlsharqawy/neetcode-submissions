class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return arr;

        for (int i{n - 1}, max_on_right{-1}, temp{}; i >= 0; --i) {
            temp = arr[i];
            arr[i] = max_on_right;
            max_on_right = max(max_on_right, temp);
        }
        return arr;
    }
};