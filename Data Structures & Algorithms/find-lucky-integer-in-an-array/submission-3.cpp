class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = arr.size() - 1, counter{}; i > -1; --i) {
            ++counter;
            if (!i or arr[i] != arr[i - 1]) {
                if (arr[i] == counter)
                    return arr[i];
                counter = 0;
            }
        }
        return -1;
    }
};