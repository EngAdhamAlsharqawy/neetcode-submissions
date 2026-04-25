class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int empty{ !flowerbed[0] };
        for (int f : flowerbed)
            if (f)
                n -= (empty - 1) / 2, empty = 0;
            else
                ++empty;
        n -= empty / 2;
        return n <= 0;
    }
};