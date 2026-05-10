class Solution {
public:
    int findLucky(vector<int>& arr) {
        for (int i{}; i < arr.size(); ++i) {
            int prev{ i }, num{ arr[i] };
            while (0 < num and num <= arr.size()) {
                int next{ arr[num - 1] };
                arr[num - 1] = min(0, arr[num - 1]) - 1;
                if (num - 1 <= i or num - 1 == prev)
                    break;
                prev = num - 1;
                num = next;
            }
        }
        for (int i = arr.size() - 1; i > -1; --i)
            if (i + 1 == -arr[i])
                return i + 1;
        return -1;
    }
};