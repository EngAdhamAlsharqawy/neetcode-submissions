class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int N = grid.size();
        long long grid_sum = 0;
        long long grid_sq_sum = 0;

        for (vector<int>& rows : grid) {
            for (int n : rows) {
                grid_sum += n;
                grid_sq_sum += 1LL * n * n;
            }
        }

        long long expected_sum = 1LL * N * N * (N * N + 1) / 2;
        long long diff = grid_sum - expected_sum; // a - b

        long long sq_sum = 1LL * N * N * (N * N + 1) * (2 * N * N + 1) / 6;
        long long sq_diff = grid_sq_sum - sq_sum; // (a^2) - (b^2)

        long long sum = sq_diff / diff; // a + b

        int a = (sum + diff) / 2;
        int b = sum - a;

        return {a, b};
    }
};