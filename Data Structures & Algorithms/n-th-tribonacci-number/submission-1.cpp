class Solution {
public:
    int tribonacci(int n) {
        int t[]{0, 1, 1};
        if (n < 3)
            return t[n];
        n -= 2;
        while (n--) {
            int sum{t[0] + t[1] + t[2]};
            t[0] = t[1];
            t[1] = t[2];
            t[2] = sum;
        }
        return t[2];
    }
};