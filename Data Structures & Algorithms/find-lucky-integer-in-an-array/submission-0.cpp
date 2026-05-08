class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int n : arr)
            ++freq[n];
        int largestLucky{ -1 };
        for (auto [key, val] : freq)
            if (key == val and largestLucky < key)
                largestLucky = key;
        return largestLucky;
    }
};