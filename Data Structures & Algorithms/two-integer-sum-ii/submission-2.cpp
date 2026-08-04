class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i{}, n = numbers.size(); i < n; ++i) {
            int num = target - numbers[i];
            for (int l = i + 1, r = n - 1; l <= r;) {
                int mid = l + (r - l) / 2;
                if (numbers[mid] == num) {
                    return { i + 1, mid + 1 };
                } else if (numbers[mid] < num) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};