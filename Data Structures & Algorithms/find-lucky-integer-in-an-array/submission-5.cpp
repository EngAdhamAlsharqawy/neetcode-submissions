class Solution {
public:
    int findLucky(vector<int>& arr) {
        for (int n : arr) {
            int idx{ n & ((1 << 10) - 1) };
            if (idx <= arr.size())
                arr[idx - 1] += 1 << 10;
        }
        for (int i = arr.size() - 1; i > -1; --i)
            if (i + 1 == (arr[i] >> 10))
                return i + 1;
        return -1;
    }
};