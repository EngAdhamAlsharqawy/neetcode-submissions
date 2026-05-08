class Solution {
public:
    int findLucky(vector<int>& arr) {
        int largestLucky{ -1 };
        for (int n1 : arr) {
            int counter{};
            for (int n2 : arr)
                counter += n1 == n2;
            if (n1 == counter and largestLucky < n1)
                largestLucky = n1;
        }
        return largestLucky;
    }
};