class Solution {
    map<int, int> memo;
public:
    int tribonacci(int n) {
        if (n < 3)
            return n ? 1 : 0;
        if (!memo.contains(n))
            memo[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        return memo[n];
    }
};