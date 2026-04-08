class Solution {
public:
    int max_on_right_side(vector<int>& arr, int idx) {
        int max{ arr[idx + 1] };
        for (int i{ idx + 2 }; i < arr.size(); ++i)
            if (max < arr[i])
                max = arr[i];
        return max;
    }
    vector<int> replaceElements(vector<int>& arr) {
        for (int i{}; i < arr.size() - 1; ++i)
            arr[i] = max_on_right_side(arr, i);
        arr[arr.size() - 1] = -1;
        return arr;
    }
};