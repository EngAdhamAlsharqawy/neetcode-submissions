class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for (int i = arr.size() - 1; i > -1;) {
            int n{ arr[i] }, counter{};

            while (i > -1 and arr[i] == n)
                ++counter, --i;

            if (counter == n)
                return n;
        }

        return -1;
    }
};